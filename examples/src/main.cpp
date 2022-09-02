#include "cxxbridge_code/src/lib.rs.h"
#include <iostream>
#include <string>
#include "rust/cxx.h"

int main()
{

	// Return Rust `Result` with Error:
	try
	{
		std::cout << "call:" << std::endl
							<< sendNotifToFCM("hjhgj", "jhgjg", "jgjg", "jhgjhg") << std::endl;
	}
	catch (rust::Error e)
	{
		std::cerr << "Got an error from Rust function `Result`:" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
