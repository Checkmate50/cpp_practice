/*
 * 1/tester.cpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#include <iostream>
#include "functions.hpp"
#include "tester.hpp"
#include "../f_tester.hpp"

int test_mult(int& ntests); //note that ntests returns the number of tests
int test_is_multiple(int& ntests);
int test_max(int& ntests);
int test_sum(int& ntests);
int test_log_2(int& ntests);

//Called by the above


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
	errors += test_funct("mult", mult, 1, 1, 1);
	errors += test_funct("mult", mult, 2, 4, 8);
	errors += test_funct("mult", mult, -1, 5, -5);
	errors += test_funct("mult", mult, -3, -3, 9);

	return errors;
}

int test_is_multiple(int& ntests) {
	int errors = 0;
	ntests = 5;
	errors += test_funct("is_multiple", is_multiple, 6, 3, true);
	errors += test_funct("is_multiple", is_multiple, 7, 2, false);
	errors += test_funct("is_multiple", is_multiple, 3, 6, false);
	errors += test_funct("is_multiple", is_multiple, -6, -2, true);
	errors += test_funct("is_multiple", is_multiple, -8, 4, true);

	return errors;
}

int test_max(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("max", max, 2, 2, 2, 2);
	errors += test_funct("max", max, 1, 3, 3, 3);
	errors += test_funct("max", max, 2, 7, 4, 7);
	errors += test_funct("max", max, -1, -2, 5, 5);
	errors += test_funct("max", max, -1, -2, -1, -1);
	errors += test_funct("max", max, 0, 0, 0, 0);

	return errors;
}

int test_sum(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("sum", sum, 1, 1);
	errors += test_funct("sum", sum, 3, 6);
	errors += test_funct("sum", sum, 6, 21);
	errors += test_funct("sum", sum, 0, 0);
	errors += test_funct("sum", sum, 10, 55);
	errors += test_funct("sum", sum, 15, 120);

	return errors;
}

int test_log_2(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("log_2", log_2, 2, 1);
	errors += test_funct("log_2", log_2, 5, 2);
	errors += test_funct("log_2", log_2, 30, 4);
	errors += test_funct("log_2", log_2, 1024, 10);
	errors += test_funct("log_2", log_2, 1, 0);
	errors += test_funct("log_2", log_2, 3000, 11);

	return errors;
}
