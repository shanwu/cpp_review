/*
 * print_binary_demo.cpp
 *
 *  Created on: May 7, 2017
 *      Author: shanwu
 */

#include <iostream>
#include "print_bin.h"

#define PRINT_MSG(MSG, CHAR)\
	std::cout<<MSG<<" "+ get_binary(CHAR); std::cout<<std::endl;



int main() {
	unsigned int digit;
	unsigned char input;
	std::cout << "Please enter a number(0-255)";
	std::cin >> digit; input = digit;
	PRINT_MSG("binary is:",input)
}

