#include "cxxbridge_code/src/lib.rs.h"
#include <iostream>
#include <string>
#include "rust/cxx.h"

int main()
{

	// Call sendNotifToFCM
	try
	{
		std::cout << "Call sendNotifToFCM:" << std::endl;
		std::cout << sendNotifToFCM("test", "test", "test", "test") << std::endl;
	}
	catch (rust::Error e)
	{
		std::cerr << "Got an error from Rust sendNotifToFCM function `Result`:" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	// Call sendNotifToAPNS
	try
	{
		std::cout << "Call sendNotifToAPNS:" << std::endl;
		std::cout << sendNotifToAPNS("test", "test", "test", "test", false) << std::endl;
	}
	catch (rust::Error e)
	{
		std::cerr << "Got an error from Rust sendNotifToAPNS function `Result`:" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
