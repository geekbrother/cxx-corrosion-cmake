# CMake file for using [CXX](https://cxx.rs/) and [Corrosion](https://github.com/corrosion-rs/corrosion) in CMake project to call Rust functions from C++ and C++ from Rust

This is a fork of the [rusty_cmake](https://github.com/trondhe/rusty_cmake) repository to use CXX and Corrosion in a CMake project with the following modifications:

### `cxx_corrosion.cmake` file:
 - Function to get STEM is removed in a favor of one-line solution;
 - Simplify by using a simple one CMakeLists file for the project;
 - Windows-related code is removed (Linux and MacOS are supported);
 - Minor code changes to simplify and use a modern C++.

# Why?

This `cmake/corrosion_cxx.cmake` can be imported in any CMake project to simplify Rust code usage in C++.

Current solution is a battle-tested and `cmake/corrosion_cxx.cmake` file is used in a [Comm](https://comm.app) application development.

# Current examples

Examples are located in `examples` folder.

This repo examples can be used as a sandbox playground for testing simple ideas of the Rust library integration in the current C++ CMake project (`examples/rust-from-cpp`) and as examples of the usage and calling C++ code from Rust (`examples/cpp-from-rust`).

# Calling Rust code from C++
## Code examples to call Rust functions from C++:
- [Example of using a different primitive types](https://github.com/geekbrother/cxx-corrosion-cmake/blob/fe14ac52173737163e3ba427557187b9e4ba5d33/examples/src/main.cpp#L8) for arguments and returns;
- [Example](https://github.com/geekbrother/cxx-corrosion-cmake/blob/fe14ac52173737163e3ba427557187b9e4ba5d33/examples/src/main.cpp#L21) of using [Rust Result type](https://cxx.rs/binding/result.html#returning-result-from-rust-to-c) and [Anyhow](https://docs.rs/anyhow/latest/anyhow/) in return to C++;
- [Example of using panics](https://github.com/geekbrother/cxx-corrosion-cmake/blob/fe14ac52173737163e3ba427557187b9e4ba5d33/examples/src/main.cpp#L33) in Rust when calling from C++.

## Dependencies
  - Linux or MacOS
  - CMake
  - Clang
  - [Corrosion](https://github.com/corrosion-rs/corrosion#installation)
  - Rustup
  - Nix (optional) or Docker (optional)

## Build

### Using CMake

Run CMake and build commands in the `examples/rust-from-cpp` folder: 

`cmake -B build . && make -C build -j4`.

Then you can run the example app by calling:

`build/cxx_cmake`.

### In Nix

If you are using [Nix](https://nixos.org/download.html) as a development environment you can use a nix shell with all dependencies:

```
nix-shell -p cmake -p clang -p rustup -p libiconv -p git --pure
```

And then run build commands from the CMake section above.

### In Docker

There is a Docker file to build and run the example app in Docker container.
To build it run the build command from the `examples/rust-from-cpp` folder of the project:

```
docker build . -t cxx-corrosion-cmake -f Dockerfile
```

Then you can run the example app by calling:

```
docker run cxx-corrosion-cmake
```

# Todo

Create a packages in package managers to help tracking updates in the project instead of manually track the changes.

 - Make it nix package
 - Make it vcpkg package

# Sponsors ❤️

[**Comm.app**](https://comm.app) is a crypto-native chat (think "Web3 Discord").
