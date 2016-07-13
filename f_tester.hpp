/*
 * f_tester.hpp
 *
 *  Created on: Jul 13, 2016
 *      Author: checkmate
 */

#ifndef F_TESTER_HPP_
#define F_TESTER_HPP_

#include <string>

//f is the function, a-c are test parameters, r is the expected result
bool test_funct(std::string name, int f(int), int a, int r);
bool test_funct(std::string name, int f(int, int), int a, int b, int r); //a-c are parameters, r is the expected result
bool test_funct(std::string name, int f(int, int, int), int a, int b, int c, int r);
bool test_funct(std::string name, int f(int, int, int, int), int a, int b, int c, int d, int r);
bool test_funct(std::string name, bool f(int, int), int a, int b, bool r);

#endif /* F_TESTER_HPP_ */
