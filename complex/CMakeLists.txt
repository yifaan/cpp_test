cmake_minimum_required(VERSION 2.8)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project (complex)

add_executable (complex
	main.cpp
	complex.hpp
	)

