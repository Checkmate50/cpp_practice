/*
 * tester.hpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#ifndef BASICS_TESTER_HPP_
#define BASICS_TESTER_HPP_

#include <string>

void test1();

//private
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

#endif /* BASICS_TESTER_HPP_ */
