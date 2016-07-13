/*
 * 2/tester.cpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#include <iostream>
#include "functions.hpp"
#include "tester.hpp"
#include "../f_tester.hpp"

int test_add(int& ntests); //note that ntests returns the number of tests
int test_mean(int& ntests);
int test_factorial(int& ntests);
int test_fact_divide(int& ntests);
int test_series(int& ntests);

void test2() {
	int ntests;
	int total_tests = 0;
	int errors = 0;

	std::cout << std::boolalpha; //print bools

	std::cout << "Testing add:" << std::endl;
	errors += test_add(ntests);
	total_tests += ntests;

	std::cout << "Testing mean:" << std::endl;
	errors += test_mean(ntests);
	total_tests += ntests;

	std::cout << "Testing factorial:" << std::endl;
	errors += test_factorial(ntests);
	total_tests += ntests;

	std::cout << "Testing fact_divide:" << std::endl;
	errors += test_fact_divide(ntests);
	total_tests += ntests;

	std::cout << "Testing series:" << std::endl;
	errors += test_series(ntests);
	total_tests += ntests;

	std::cout << std::endl << total_tests << " tests run, " << errors << " error(s) occurred" << std::endl;
}

int test_add(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("add", add, 3, 6, 9);
	errors += test_funct("add", add, -1, 1, 0);
	errors += test_funct("add", add, 2, 4, 6, 12);
	errors += test_funct("add", add, -3, -2, 4, -1);
	errors += test_funct("add", add, 1, 2, 3, 4, 10);
	errors += test_funct("add", add, -2, -4, 1, 3, -2);

	return errors;
}

int test_mean(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("mean", mean, 3, 6, 4);
	errors += test_funct("mean", mean, -5, -3, -4);
	errors += test_funct("mean", mean, 2, 4, 6, 4);
	errors += test_funct("mean", mean, -5, -3, -1, -3);
	errors += test_funct("mean", mean, 1, 2, 3, 4, 2);
	errors += test_funct("mean", mean, -1, -2, -3, 4, 0);

	return errors;
}

int test_factorial(int& ntests) {
	int errors = 0;
	ntests = 5;
	errors += test_funct("factorial", factorial, 2, 2);
	errors += test_funct("factorial", factorial, 5, 120);
	errors += test_funct("factorial", factorial, 0, 1);
	errors += test_funct("factorial", factorial, 3, 6);
	errors += test_funct("factorial", factorial, 7, 5040);

	return errors;
}

int test_fact_divide(int& ntests) {
	int errors = 0;
	ntests = 6;
	errors += test_funct("fact_divide", fact_divide, 2, 1, 2);
	errors += test_funct("fact_divide", fact_divide, 2, 3, 0);
	errors += test_funct("fact_divide", fact_divide, 5, 3, 20);
	errors += test_funct("fact_divide", fact_divide, 10, 9, 10);
	errors += test_funct("fact_divide", fact_divide, 5, 0, 120);
	errors += test_funct("fact_divide", fact_divide, 2, 10, 0);

	return errors;
}

int test_series(int& ntests) {
	int errors = 0;
	ntests = 5;
	errors += test_funct("series", series, 0, 3);
	errors += test_funct("series", series, 1, 8);
	errors += test_funct("series", series, 3, 38);
	errors += test_funct("series", series, 5, 158);
	errors += test_funct("series", series, 7, 638);

	return errors;
}
