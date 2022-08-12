# Using [CXX](https://cxx.rs/) and [Corrosion](https://github.com/corrosion-rs/corrosion) in CMake project example

This is a fork of the [rusty_cmake](https://github.com/trondhe/rusty_cmake) repository with the following modifications:

 - Cargo target architecture detection.
 - Windows-related code is removed.
 - Simplify by using a simple one CMakeLists file.
 - [Example of using a different types](https://github.com/geekbrother/cxx-corrosion-cmake/blob/2a981b2ec34ee4d4ffe261b1be07691f74c31a04/src/main.cpp#L8) for arguments and returns.
 - [Example of using panics](https://github.com/geekbrother/cxx-corrosion-cmake/blob/2a981b2ec34ee4d4ffe261b1be07691f74c31a04/src/main.cpp#L15) in Rust + C++.

## Usage

Run CMake and build command `cmake -B build . && make -C build -j4`. 
Then you can run the example app `build/rusty_cmake`.

## Purpose

This repo can be used as a sandbox playground for testing simple ideas of the Rust library integration in the current C++ CMake project.
