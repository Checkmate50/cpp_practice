/*
 * 1/tester.cpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#include <iostream>
#include <string>
#include "functions.hpp"
#include "tester.hpp"

int test_mult(int& ntests); //note that ntests returns the number of tests
int test_is_multiple(int& ntests);
int test_max(int& ntests);
int test_sum(int& ntests);
int test_log_2(int& ntests);

//Called by the above
bool test(std::string name, int f(int, int), int a, int b, int r); //a-c are parameters, r is the expected result
bool test(std::string name, bool f(int, int), int a, int b, bool r);
bool test(std::string name, int f(int, int, int), int a, int b, int c, int r);
bool test(std::string name, int f(int), int a, int r);

void test1() {
	int ntests;
	int total_tests = 0;
	int errors = 0;

	std::cout << std::boolalpha; //print bools

	std::cout << "Testing mult:" << std::endl;
	errors += test_mult(ntests);
	total_tests += ntests;

	std::cout << "Testing is_multiple:" << std::endl;
	errors += test_is_multiple(ntests);
	total_tests += ntests;

	std::cout << "Testing max:" << std::endl;
	errors += test_max(ntests);
	total_tests += ntests;

	std::cout << "Testing sum:" << std::endl;
	errors += test_sum(ntests);
	total_tests += ntests;

	std::cout << "Testing log_2:" << std::endl;
	errors += test_log_2(ntests);
	total_tests += ntests;

	std::cout << std::endl << total_tests << " tests run, " << errors << " error(s) occurred" << std::endl;
}

int test_mult(int& ntests) {
	int errors = 0;
	ntests = 4;
	errors += test("mult", mult, 1, 1, 1);
	errors += test("mult", mult, 2, 4, 8);
	errors += test("mult", mult, -1, 5, -5);
	errors += test("mult", mult, -3, -3, 9);

	return errors;
}

int test_is_multiple(int& ntests) {
	int errors = 0;
	ntests = 5;
	errors += test("is_multiple", is_multiple, 6, 3, true);
	errors += test("is_multiple", is_multiple, 7, 2, false);
	errors += test("is_multiple", is_multiple, 3, 6, false);
	errors += test("is_multiple", is_multiple, -6, -2, true);
	errors += test("is_multiple", is_multiple, -8, 4, true);

	return errors;
}

int test_max(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test("max", max, 2, 2, 2, 2);
	errors += test("max", max, 1, 3, 3, 3);
	errors += test("max", max, 2, 7, 4, 7);
	errors += test("max", max, -1, -2, 5, 5);
	errors += test("max", max, -1, -2, -1, -1);
	errors += test("max", max, 0, 0, 0, 0);

	return errors;
}

int test_sum(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test("sum", sum, 1, 1);
	errors += test("sum", sum, 3, 6);
	errors += test("sum", sum, 6, 21);
	errors += test("sum", sum, 0, 0);
	errors += test("sum", sum, 10, 55);
	errors += test("sum", sum, 15, 120);

	return errors;
}

int test_log_2(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test("log_2", log_2, 2, 1);
	errors += test("log_2", log_2, 5, 2);
	errors += test("log_2", log_2, 30, 4);
	errors += test("log_2", log_2, 1024, 10);
	errors += test("log_2", log_2, 1, 0);
	errors += test("log_2", log_2, 3000, 11);

	return errors;
}

bool test(std::string name, int f(int, int), int a, int b, int r) {
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

bool test(std::string name, bool f(int, int), int a, int b, bool r) {
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

bool test(std::string name, int f(int, int, int), int a, int b, int c, int r) {
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

bool test(std::string name, int f(int), int a, int r) {
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
