/*
 * extern_demo2.cpp
 * compile extern_demo1.cpp and extern_demo2.cpp together with the following cmd:
 * #g++ extern_demo1.cpp extern_demo2.cpp -o extern_demo
 *  Created on: Apr 14, 2017
 *      Author: shanwu
 */
extern int global;
#include <iostream>
using namespace std;

void func() {
	cout <<"func value: "<< global << endl;
	cout <<"func address: " << &global << endl;
	global = global * 12;
	cout <<"func value: "<< global << endl;
}



