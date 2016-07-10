/*
 * main.cpp
 *
 *  Created on: Jul 10, 2016
 *      Author: checkmate
 */

#include <stdlib.h>
#include "checker.hpp"
#include "1-Basics/tester.hpp"

int main(int argc, char* argv[]) {
	int folder = 0;
	char* end;
	if (argc > 1)
		folder = strtol(argv[1], &end, 10);

	if (folder == 0) {
		run();
	}
	else if (folder == 1) {
		test1();
	}

	return 0;
}
