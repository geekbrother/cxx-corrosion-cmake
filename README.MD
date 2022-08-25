# Using [CXX](https://cxx.rs/) and [Corrosion](https://github.com/corrosion-rs/corrosion) in CMake project example

This is a fork of the [rusty_cmake](https://github.com/trondhe/rusty_cmake) repository to use CXX and Corrosion in a CMake project with the following modifications:

### `cxx_corrosion.cmake` file:
 - Windows-related code is removed (Linux and MacOS are supported).
 - Get STEM function is removed in a favor of using one line `get_filename_component(_LIB_PATH_STEM ${lib_path} NAME)`.
 - Simplify by using a simple one CMakeLists file for the project.

### Code examples to call Rust functions from C++:
- [Example of using a different primitive types](https://github.com/geekbrother/cxx-corrosion-cmake/blob/main/src/main.cpp) for arguments and returns.
- Example of using [Rust Result type](https://cxx.rs/binding/result.html#returning-result-from-rust-to-c) and [Anyhow](https://docs.rs/anyhow/latest/anyhow/).
- [Example of using panics](https://github.com/geekbrother/cxx-corrosion-cmake/blob/2a981b2ec34ee4d4ffe261b1be07691f74c31a04/src/main.cpp#L15) in Rust + C++.

## Usage

Run CMake and build command in a project's root: `cmake -B build . && make -C build -j4`. 
Then you can run the example app by call `build/cxx_cmake`.

## Nix

If you are using Nix as a development environment you can use a nix shell with all dependencies:
```
nix-shell -p cmake -p clang -p corrosion -p rustup -p libiconv --pure
```
And then run the building commands from above.

## Purpose

This repo can be used as a sandbox playground for testing simple ideas of the Rust library integration in the current C++ CMake project and as examples of the usage.

