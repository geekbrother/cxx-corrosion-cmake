# Example of using [CXX](https://cxx.rs/) and [Corrosion](https://github.com/corrosion-rs/corrosion) in CMake project to call Rust functions from C++

This is a fork of the [rusty_cmake](https://github.com/trondhe/rusty_cmake) repository to use CXX and Corrosion in a CMake project to use CXX and Corrosion in a CMake project with the following modifications:

### `cxx_corrosion.cmake` file:
### `cxx_corrosion.cmake` file:
 - Windows-related code is removed (Linux and MacOS are supported) (Linux and MacOS are supported).
 - Windows-related code is removed (Linux and MacOS are supported) (Linux and MacOS are supported).
 - Simplify by using a simple one CMakeLists file for the project.

### Code examples to call Rust functions from C++:
- [Example of using a different primitive types](https://github.com/geekbrother/cxx-corrosion-cmake/blob/main/src/main.cpp) for arguments and returns.
- Example of using [Rust Result type](https://cxx.rs/binding/result.html#returning-result-from-rust-to-c) in return and [Anyhow](https://docs.rs/anyhow/latest/anyhow/).
- [Example of using panics](https://github.com/geekbrother/cxx-corrosion-cmake/blob/2a981b2ec34ee4d4ffe261b1be07691f74c31a04/src/main.cpp#L15) in Rust + C++.
### Code examples to call Rust functions from C++:
- [Example of using a different primitive types](https://github.com/geekbrother/cxx-corrosion-cmake/blob/main/src/main.cpp) for arguments and returns.
- Example of using [Rust Result type](https://cxx.rs/binding/result.html#returning-result-from-rust-to-c) in return and [Anyhow](https://docs.rs/anyhow/latest/anyhow/).
- [Example of using panics](https://github.com/geekbrother/cxx-corrosion-cmake/blob/2a981b2ec34ee4d4ffe261b1be07691f74c31a04/src/main.cpp#L15) in Rust + C++.

# Why?

This repo can be used as a sandbox playground for testing simple ideas of the Rust library integration in the current C++ CMake project and as examples of the usage.

# Usage

## Dependencies
  - Linux or MacOS
  - CMake
  - Clang
## CMake

Run CMake and build commands in a project's root: 

`cmake -B build . && make -C build -j4`.

Then you can run the example app by calling:

`build/cxx_cmake`.

## Nix

If you are using [Nix](https://nixos.org/download.html) as a development environment you can use a nix shell with all dependencies:

```
nix-shell -p cmake -p clang -p rustup -p libiconv -p git --pure
```

And then run build commands from CMake above.

## Docker

There is a Docker file to build and run the example app in Docker container.
To build it run the build command from the project's root directory:

```
docker build . -t cxx-corrosion-cmake
```

Then you can run the example app by calling:

```
docker run cxx-corrosion-cmake
```
  - [Corrosion](https://github.com/corrosion-rs/corrosion#installation)
# Todo
## CMake
 - [ ] Make it vcpkg package
 - [ ] Make it nix package
Run CMake and build commands in a project's root: 

`cmake -B build . && make -C build -j4`.

Then you can run the example app by calling:

`build/cxx_cmake`.

## Nix

If you are using [Nix](https://nixos.org/download.html) as a development environment you can use a nix shell with all dependencies:

```
nix-shell -p cmake -p clang -p rustup -p libiconv -p git --pure
```

And then run build commands from CMake above.

## Docker

There is a Docker file to build and run the example app in Docker container.
To build it run the build command from the project's root directory:

```
docker build . -t cxx-corrosion-cmake
```

Then you can run the example app by calling:

```
docker run cxx-corrosion-cmake
```

# Todo

 - [ ] Make it vcpkg package
 - [ ] Make it nix package
