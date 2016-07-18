/*
 * tester.cpp
 *
 *  Created on: Jul 17, 2016
 *      Author: checkmate
 */

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

int test_min(int& ntests); //note that ntests returns the number of tests
int test_avg(int& ntests);
int test_reverse(int& ntests);
int test_contains(int& ntests);
int test_count(int& ntests);
int test_replace(int& ntests);
int test_contains_all(int& ntests);
int test_sort_arr(int& ntests);

void test3() {
	int ntests;
	int total_tests = 0;
	int errors = 0;

	std::cout << std::boolalpha; //print bools

	std::cout << "Testing min:" << std::endl;
	errors += test_min(ntests);
	total_tests += ntests;

	std::cout << "Testing avg:" << std::endl;
	errors += test_avg(ntests);
	total_tests += ntests;

	std::cout << "Testing reverse:" << std::endl;
	errors += test_reverse(ntests);
	total_tests += ntests;

	std::cout << "Testing contains:" << std::endl;
	errors += test_contains(ntests);
	total_tests += ntests;

	std::cout << "Testing count:" << std::endl;
	errors += test_count(ntests);
	total_tests += ntests;

	std::cout << "Testing replace:" << std::endl;
	errors += test_replace(ntests);
	total_tests += ntests;

	std::cout << "Testing contains_all:" << std::endl;
	errors += test_contains_all(ntests);
	total_tests += ntests;

	std::cout << "Testing sort_arr:" << std::endl;
	errors += test_sort_arr(ntests);
	total_tests += ntests;

	std::cout << std::endl << total_tests << " tests run, " << errors << " error(s) occurred" << std::endl;
}

int test_min(int& ntests) {
	int errors = 0;
	ntests = 6;
	int arr1[] = {1, 2, 3};
	errors += test_funct("min", min, arr1, 3, 1);
	int arr2[] = {2, -3};
	errors += test_funct("min", min, arr2, 5, -3);
	int arr3[] = {5};
	errors += test_funct("min", min, arr3, 1, 5);
	int arr4[] = {-5, -10, -3};
	errors += test_funct("min", min, arr4, 3, -10);
	int arr5[] = {4, 3, 1, 1, 5, 5};
	errors += test_funct("min", min, arr5, 6, 1);
	int arr6[] = {6, 6};
	errors += test_funct("min", min, arr6, 2, 6);

	return errors;
}

int test_avg(int& ntests) {
	int errors = 0;
	ntests = 5;
	int arr1[] = {1, 2, 3};
	errors += test_funct("avg", avg, arr1, 3, 2);
	int arr2[] = {-1, -2, 6};
	errors += test_funct("avg", avg, arr2, 3, 1);
	int arr3[] = {3};
	errors += test_funct("avg", avg, arr3, 1, 3);
	int arr4[] = {2, 5};
	errors += test_funct("avg", avg, arr4, 2, 3);
	int arr5[] = {1, 1, 1, 1};
	errors += test_funct("avg", avg, arr5, 4, 1);

	return errors;
}

int test_reverse(int& ntests) {
	int errors = 0;
	ntests = 5;
	int arr1[] = {1, 2, 3};
	int rarr1[] = {3, 2, 1};
	errors += test_funct("reverse", reverse, arr1, 3, rarr1);
	int arr2[] = {-3, 4, 5, 2};
	int rarr2[] = {2, 5, 4, -3};
	errors += test_funct("reverse", reverse, arr2, 4, rarr2);
	int arr3[] = {2};
	int rarr3[] = {2};
	errors += test_funct("reverse", reverse, arr3, 1, rarr3);
	int arr4[] = {2, 4, 2};
	int rarr4[] = {2, 4, 2};
	errors += test_funct("reverse", reverse, arr4, 3, rarr4);
	int arr5[] = {5, 5, 3};
	int rarr5[] = {3, 5, 5};
	errors += test_funct("reverse", reverse, arr5, 3, rarr5);

	return errors;
}

int test_contains(int& ntests) {
	int errors = 0;
	ntests = 6;
	char arr1[] = {'a', 'b', 'c'};
	errors += test_funct("contains", contains, arr1, 3, 'a', true);
	char arr2[] = {'a', 'b'};
	errors += test_funct("contains", contains, arr2, 2, 'c', false);
	char arr3[] = {'0', 'q'};
	errors += test_funct("contains", contains, arr3, 2, 'q', true);
	char arr4[] = {'a', 'a', 'a', 'a'};
	errors += test_funct("contains", contains, arr4, 4, 'a', true);
	char arr5[] = {'a', 'b', 'a'};
	errors += test_funct("contains", contains, arr5, 3, 'c', false);
	char arr6[] = {'a', 'b', 'a'};
	errors += test_funct("contains", contains, arr6, 3, 'b', true);

	return errors;
}

int test_count(int& ntests) {
	int errors = 0;
	ntests = 5;
	int arr1[] = {1, 1, 1};
	errors += test_funct("count", count, arr1, 3, 1, 3);
	int arr2[] = {5, 3, 6, 5};
	errors += test_funct("count", count, arr2, 4, 3, 1);
	int arr3[] = {1, 2, 3};
	errors += test_funct("count", count, arr3, 3, 4, 0);
	int arr4[] = {2, 4, 3, 4};
	errors += test_funct("count", count, arr4, 4, 4, 2);
	int arr5[] = {1, 5, -3, -2};
	errors += test_funct("count", count, arr5, 4, -3, 1);

	return errors;
}

int test_replace(int& ntests) {
	int errors = 0;
	ntests = 5;
	char arr1[] = {'a', 'a', 'a'};
	char rarr1[] = {'b', 'b', 'b'};
	errors += test_funct("replace", replace, arr1, 3, 'a', 'b', rarr1);
	char arr2[] = {'a', 'b', 'c'};
	char rarr2[] = {'a', 'c', 'c'};
	errors += test_funct("replace", replace, arr2, 3, 'b', 'c', rarr2);
	char arr3[] = {'a', 'a', 'a'};
	char rarr3[] = {'a', 'a', 'a'};
	errors += test_funct("replace", replace, arr3, 3, 'b', 'a', rarr3);
	char arr4[] = {'1', '2', '4'};
	char rarr4[] = {'1', '3', '4'};
	errors += test_funct("replace", replace, arr4, 3, '2', '3', rarr4);
	char arr5[] = {'b', 'b', 'a', 'a', 'b'};
	char rarr5[] = {'b', 'b', 'b', 'b', 'b'};
	errors += test_funct("replace", replace, arr5, 5, 'a', 'b', rarr5);

	return errors;
}

int test_contains_all(int& ntests) {
	int errors = 0;
	ntests = 4;
	char arr1[] = {'a', 'b', 'c'};
	char chars1[] = {'a'};
	errors += test_funct("contains_all", contains_all, arr1, 3, chars1, 1, true);
	char arr2[] = {'a', 'b', 'c'};
	char chars2[] = {'a', 'd'};
	errors += test_funct("contains_all", contains_all, arr2, 3, chars2, 2, false);
	char arr3[] = {'a', 'b', 'c'};
	char chars3[] = {'a', 'c', 'b'};
	errors += test_funct("contains_all", contains_all, arr3, 3, chars3, 3, true);
	char arr4[] = {'d', 'c', 'd', 'f', 'a'};
	char chars4[] = {'a', 'd', 'b', 'f'};
	errors += test_funct("contains_all", contains_all, arr4, 5, chars4, 4, false);

	return errors;
}

int test_sort_arr(int& ntests) {
	int errors = 0;
	ntests = 4;
	int arr1[] = {1, 3, 2};
	int rarr1[] = {1, 2, 3};
	errors += test_funct("sort_arr", sort_arr, arr1, 3, rarr1);
	int arr2[] = {-1, 0, 2};
	int rarr2[] = {-1, 0, 2};
	errors += test_funct("sort_arr", sort_arr, arr2, 3, rarr2);
	int arr3[] = {1, 5, -3, -6};
	int rarr3[] = {-6, -3, 1, 5};
	errors += test_funct("sort_arr", sort_arr, arr3, 4, rarr3);
	int arr4[] = {2, 2, 2};
	int rarr4[] = {2, 2, 2};
	errors += test_funct("sort_arr", sort_arr, arr4, 3, rarr4);

	return errors;
}
