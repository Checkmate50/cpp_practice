/*
 * f_tester.cpp
 *
 *  Created on: Jul 13, 2016
 *      Author: checkmate
 */

#include "f_tester.hpp"
#include <iostream>

bool test_funct(std::string name, int f(int), int a, int r) {
	try {
		int result = f(a);
		if (result != r) {
			std::cout << "The call " << name << "(" << a <<
					") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(" << a << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}

bool test_funct(std::string name, int f(int, int), int a, int b, int r) {
	try {
		int result = f(a, b);
		if (result != r) {
			std::cout << "The call " << name << "(" << a << ", " << b <<
					") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(" << a << ", " << b <<
				") caused an exception" << std::endl;
		return true;
	}
	return false;
}

bool test_funct(std::string name, int f(int, int, int), int a, int b, int c, int r) {
	try {
		int result = f(a, b, c);
		if (result != r) {
			std::cout << "The call " << name << "(" << a << ", " << b << ", " << c <<
					") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(" << a << ", " << b << ", " << c <<
				") caused an exception" << std::endl;
		return true;
	}
	return false;
}

bool test_funct(std::string name, int f(int, int, int, int), int a, int b, int c, int d, int r) {
	try {
		int result = f(a, b, c, d);
		if (result != r) {
			std::cout << "The call " << name << "(" << a << ", " << b << ", " << c << ", " << d <<
					") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(" << a << ", " << b << ", " << c << ", " << d <<
				") caused an exception" << std::endl;
		return true;
	}
	return false;
}

bool test_funct(std::string name, bool f(int, int), int a, int b, bool r) {
	try {
		bool result = f(a, b);
		if (result != r) {
			std::cout << "The call " << name << "(" << a << ", " << b <<
					") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(" << a << ", " << b <<
				") caused an exception" << std::endl;
		return true;
	}
	return false;
}
