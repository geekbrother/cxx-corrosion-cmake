#include "cxxbridge_code/src/lib.rs.h"
#include <iostream>
#include <string>
#include "rust/cxx.h"

int main()
{
	// Primitive types:
	std::cout << "[1] A value given via generateb cxxbridge for lib_cxxbridge_bool: "
						<< lib_cxxbridge_bool(true) << std::endl;
	std::cout << "[2] A value given via generated cxxbridge for lib_cxxbridge_integer: "
						<< lib_cxxbridge_integer(86) << std::endl;
	const rust::String testString = "Max";
	std::cout << "[3] A value given via generated cxxbridge for lib_cxxbridge_string: "
						<< lib_cxxbridge_string(testString) << std::endl;

	// Return Rust `Result` with  Ok:
	std::cout << "[4] A Rust `Result Ok` value given via generated cxxbridge for lib_cxxbridge_return_result_ok:" << std::endl
						<< lib_cxxbridge_return_result_ok() << std::endl;

	// Return Rust `Result` with Error:
	try
	{
		std::cout << "[5] A Rust `Result Error` value given via generated cxxbridge for lib_cxxbridge_return_result_error:" << std::endl
							<< lib_cxxbridge_return_result_error() << std::endl;
	}
	catch (rust::Error e)
	{
		std::cerr << "Got an error from Rust function `Result`:" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	// Panic in a function call:
	std::cout << "[6] Testing a case of panic by running lib_cxxbridge_panicked_function:" << std::endl;
	std::cout << lib_cxxbridge_panicked_function();

	return 0;
}
