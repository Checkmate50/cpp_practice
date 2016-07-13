/*
 * functions.hpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#ifndef FUNCTIONS_FUNCTIONS_HPP_
#define FUNCTIONS_FUNCTIONS_HPP_

/*
 * returns the sum of all of the parameters
 * Examples:
 * add(3, 6) = 9
 * add(2, 4, 6) = 12
 * add(1, 2, 3, 4) = 10
 */
int add(int x, int y);
int add(int x, int y, int z);
int add(int x, int y, int z, int a);

/*
 * returns the average of all the parameters (rounded towards zero)
 * Note that you may use the add function defined above
 * Examples:
 * mean(3, 6) = 4
 * mean(2, 4, 6) = 4
 * mean(1, 2, 3, 4) = 2
 */
int mean(int x, int y);
int mean(int x, int y, int z);
int mean(int x, int y, int z, int a);

/*
 * returns x! (assume that x >= 0)
 * Examples:
 * factorial(2) = 2
 * factorial(5) = 120
 * factorial(0) = 1
 */
int factorial(int x);

/*
 * returns x!/y! (round down, assume that x >= 0; y >= 0)
 * Note that you may use the factorial function defined above
 * fact_divide(2, 1) = 2
 * fact_divide(2, 3) = 0
 * fact_divide(5, 3) = 20
 */
int fact_divide(int x, int y);

/*
 * Returns the nth value of the following series: (assume n >= 0)
 * a_0 = 3
 * a_n = 2 + 2*a_(n-1)
 * Examples:
 * series(0) = 3
 * series(1) = 8
 * series(3) = 38
 */
int series(int n);

#endif /* FUNCTIONS_FUNCTIONS_HPP_ */
