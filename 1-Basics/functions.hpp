/*
 * functions.hpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#ifndef BASICS_FUNCTIONS_HPP_
#define BASICS_FUNCTIONS_HPP_

/*
 * returns x*y
 * Examples:
 * mult(2, 4) = 8
 * mult(-1, 5) = -5
 * mult(-3, -3) = 9
 */
int mult(int x, int y);

/*
 * returns whether or not x is a multiple of y
 * i.e., returns true iff x is a multiple of y
 * Examples:
 * is_multiple(6, 3) = true
`* is_multiple(7, 2) = false
 * is_multiple(3, 6) = false
 * is_multiple(-8, 4) = true
 */
bool is_multiple(int x, int y);

/*
 * returns whichever value is the maximum of the three
 * Examples
 * max(2, 2, 2) = 2
 * max(1, 3, 3) = 3
 * max(2, 7, 4) = 7
 */
int max(int x, int y, int z);

/*
 * Given some positive integer x
 * returns the sum from 0 to x
 * Examples
 * sum(1) = 1
 * sum(3) = 6
 * sum(6) = 21
 */
int sum(int x);

/*
 * Given some positive integer x
 * returns the log base 2 of x (rounded down)
 * Examples
 * log_2(2) = 1
 * log_2(5) = 2
 * log_2(30) = 4
 */
int log_2(int x);

#endif /* BASICS_FUNCTIONS_HPP_ */
