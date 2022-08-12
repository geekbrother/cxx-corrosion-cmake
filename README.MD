# CXX and Corrosion in CMake project example

This is a fork of the (https://github.com/trondhe/rusty_cmake)[rusty_cmake] repository with the following modifications:

 - Cargo target architecture detecting.
 - Simplify by using a simple one CMakeLists file.
 - Exmaple using a different types for arguments.
 - Example of using panics in Rust+C++.

## Usage

Run cmake and build command `cmake -B build . && make -C build -j4`. Then you can ran the app `build/rusty_cmake`.
## Purpose

This repo can be used as a sandbox playground for testing simple ideas.
