FROM ubuntu:23.04

ENV DEBIAN_FRONTEND=noninteractive TZ=Etc/UTC
ARG LOCAL_DIRECTORY=/var/cxx_corrosion_cmake
ARG RUST_VERSION=1.69.0

# Install essential packages for building the c++
RUN apt update \
	&& apt install -y \
  build-essential curl cmake git \
  lsb-release software-properties-common

# Install Rust
RUN curl https://sh.rustup.rs -sSf | bash -s -- --default-toolchain ${RUST_VERSION} -y

# Install Corrosion
WORKDIR /var
RUN git clone https://github.com/corrosion-rs/corrosion.git
RUN cmake -Scorrosion -Bbuild -DCMAKE_BUILD_TYPE=Release
RUN cmake --build build --config Release && cmake --install build --config Release

# Copy files
COPY examples ${LOCAL_DIRECTORY}/examples
COPY cmake ${LOCAL_DIRECTORY}/cmake

# Compile example app
WORKDIR ${LOCAL_DIRECTORY}/examples/rust-from-cpp
RUN rm -dfr build && cmake -B build . && make -C build -j4

# Run the example app
CMD ["${LOCAL_DIRECTORY}/examples/rust-from-cpp/build/cxx_cmake"]
