/*
 * functions.hpp
 *
 *  Created on: Jul 13, 2016
 *      Author: checkmate
 */

#ifndef ARRAYS_FUNCTIONS_HPP_
#define ARRAYS_FUNCTIONS_HPP_

/*
 * Given an integer array arr with length 'length'
 * This function returns the minimum value in that array
 * Examples:
 * min([1, 2, 3], 3) = 1
 * min([2, -3], 2) = -3
 * min([5], 1) = 5
 */
int min(int arr[], int length);

/*
 * Given an integer array arr with length 'length'
 * This function returns the mean of the values in array (rounded towards zero)
 * Examples:
 * mean([1, 2, 3], 3) = 2
 * mean([-1, -2, 6], 3) = 1
 * mean([3], 1) = 3
 */
int avg(int arr[], int length);

/*
 * Given an integer array arr with length 'length'
 * This function reverses the order of values in that array
 * Examples:
 * reverse([1, 2, 3], 3) --> [3, 2, 1]
 * reverse([-3, 4, 5, 2], 4) --> [2, 5, 4, -3]
 * reverse([2], 1) --> [2]
 */
void reverse(int arr[], int length);

/*
 * Given a character array arr with length 'length' and a character c
 * This function returns whether or not c is an element of arr
 * Examples:
 * contains(['a', 'b', 'c'], 3, 'a') = true
 * contains(['a', 'b'], 2, 'c') = false
 * contains(['0', 'q'], 2, 'q') = true
 */
bool contains(char arr[], int length, char c);

/*
 * Given an integer array arr with length 'length' and a value val
 * This function returns the number of times val is present in arr
 * Examples:
 * count([1, 1, 1], 3, 1) = 3
 * count([5, 3, 6, 5], 4, 3) = 1
 * count([1, 2, 3], 3, 4) = 0
 */
int count(int arr[], int length, int val);

/*
 * Given a character array arr with length 'length', a character item, and a replacement character
 * This function replaces all instances of 'item' with 'replacement' in the array
 * Examples:
 * replace(['a', 'a', 'a'], 3, 'a', 'b') --> ['b', 'b', 'b']
 * replace(['a', 'b', 'c'], 3, 'b', 'c') --> ['a', 'b', 'c']
 * replace(['a', 'a', 'a'], 3, 'b', 'a') --> ['a', 'a', 'a']
 */
void replace(char arr[], int length, char item, char replacement);

/*
 * NOTE: This function is relatively hard to implement and is therefore extra credit
 *
 * Given a character array arr with length 'arr_length'
 * 	and a second character chars  with length 'chars__length'
 * This function returns whether or not EVERY character in chars is contained in arr
 * Examples:
 * contains_all(contains(['a', 'b', 'c'], 3, ['a'], 1) = true
 * contains_all(contains(['a', 'b', 'c'], 3, ['a', 'd'], 2) = false
 * contains_all(contains(['a', 'b', 'c'], 3, ['a', 'c', 'b'], 3) = true
 */
bool contains_all(char arr[], int arr_length, char chars[], int chars_length);

/*
 * NOTE: This function is very hard to implement and is therefore extra credit
 *
 * Given an integer array arr with length 'length'
 * This function sorts that array from low to high
 * Examples:
 * sort_arr([1, 3, 2], 3) --> [1, 2, 3]
 * sort_arr([-1, 0, 2], 3) --> [-1, 0, 2]
 * sort_arr([1, 5, -3, -6], 4) --> [-6, -3, 1, 5]
 */
void sort_arr(int arr[], int length);

#endif /* ARRAYS_FUNCTIONS_HPP_ */
