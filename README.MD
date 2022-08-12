# CXX and Corrosion in CMake project example

This is a fork of the [rusty_cmake](https://github.com/trondhe/rusty_cmake) repository with the following modifications:

 - Cargo target automatically architecture detection.
 - Simplify by using a simple one CMakeLists file.
 - Example of using a different type for arguments and returns.
 - Example of using panics in Rust + C++.

## Usage

Run CMake and build command `cmake -B build . && make -C build -j4`. 
Then you can run the example app `build/rusty_cmake`.

## Purpose

This repo can be used as a sandbox playground for testing simple ideas.
