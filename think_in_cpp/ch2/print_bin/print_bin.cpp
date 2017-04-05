/*
 * print_bin.cpp
 *
 *  Created on: May 7, 2017
 *      Author: shanwu
 */
#include<string>
std::string get_binary(const unsigned char num) {
	std::string bi;
	for (int i = 7; i >= 0; i--) {
		if (num & (1 << i)) {
			bi += "1";
		} else {
			bi += "0";
		}
	}
	return bi;
}


