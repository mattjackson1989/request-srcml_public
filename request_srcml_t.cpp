/*
  @file request_srcml_t.cpp

  Test program for request_srcml()
*/

#include "request_srcml.hpp"
#include <cassert>
#include <iostream>
int main() {

	// all filenames and languages empty
    {
    	srcml_request request = { "", "", "", ""};
    	assert(request_filename(request) == "");
    	assert(request_language(request, "") == "");
    }
	// my tests	
	{
		srcml_request request = { "test", "test.cpp", "test", "test"};
		assert(request_filename(request) == "test.cpp");
		assert(request_language(request, "test.cpp") == "C++");
	}
    return 0;
}
