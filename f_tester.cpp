/*
 * f_tester.cpp
 *
 *  Created on: Jul 13, 2016
 *      Author: checkmate
 */

#include "f_tester.hpp"
#include <iostream>

void print_arr(int arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length-1; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[length-1] << "]";
}

void print_arr(char arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length-1; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[length-1] << "]";
}

bool comp_arr(int arr1[], int arr2[], int length) {
	for (int i = 0; i < length; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
}

bool comp_arr(char arr1[], char arr2[], int length) {
	for (int i = 0; i < length; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
}

void copy_arr(int arr[], int cp[], int length) {
	for (int i = 0; i < length; i++)
		cp[i] = arr[i];
}

void copy_arr(char arr[], char cp[], int length) {
	for (int i = 0; i < length; i++)
		cp[i] = arr[i];
}

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

bool test_funct(std::string name, void f(int[], int), int a[], int b, int r[]) {
	int cp[b];
	try {
		copy_arr(a, cp, b);
		f(a, b);
		if (!comp_arr(a, r, b)) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b;
			std::cout << ") gave the result ";
			print_arr(a, b);
			std::cout << " (";
			print_arr(r, b);
			std::cout << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
bool test_funct(std::string name, void f(char[], int, char, char), char a[], int b, char c, char d, char r[]) {
	char cp[b];
	try {
		copy_arr(a, cp, b);
		f(a, b, c, d);
		if (!comp_arr(a, r, b)) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b << ", " << c << ", " << d;
			std::cout << ") gave the result ";
			print_arr(a, b);
			std::cout << " (";
			print_arr(r, b);
			std::cout << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
bool test_funct(std::string name, int f(int[], int), int a[], int b, int r) {
	int cp[b];
	try {
		copy_arr(a, cp, b);
		int result = f(a, b);
		if (result != r) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b;
			std::cout << ") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ", " << b;
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
bool test_funct(std::string name, int f(int[], int, int), int a[], int b, int c, int r) {
	int cp[b];
	try {
		copy_arr(a, cp, b);
		int result = f(a, b, c);
		if (result != r) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b << ", " << c;
			std::cout << ") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ", " << b << ", " << c;
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
bool test_funct(std::string name, bool f(char[], int, char), char a[], int b, char c, bool r) {
	char cp[b];
	try {
		copy_arr(a, cp, b);
		bool result = f(a, b, c);
		if (result != r) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b << ", " << c;
			std::cout << ") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ", " << b << ", " << c;
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
bool test_funct(std::string name, bool f(char[], int, char[], int), char a[], int b, char c[], int d, bool r) {
	char cp[b];
	char cp2[d];
	try {
		copy_arr(a, cp, b);
		copy_arr(c, cp2, d);
		bool result = f(a, b, c, d);
		if (result != r) {
			std::cout << "The call " << name << "(";
			print_arr(cp, b);
			std::cout << ", " << b << ", ";
			print_arr(cp2, d);
			std::cout << ", " << d;
			std::cout << ") gave the result " << result << " (" << r << " expected)" << std::endl;
			return true;
		}
	}
	catch(...) {
		std::cout << "The call " << name << "(";
		print_arr(cp, b);
		std::cout << ", " << b << ", ";
		print_arr(cp2, d);
		std::cout << ", " << d;
		std::cout << ") caused an exception" << std::endl;
		return true;
	}
	return false;
}
