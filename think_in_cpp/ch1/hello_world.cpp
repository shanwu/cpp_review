/*
 * hello_world.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: shanwu
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
	cout << "Hello C++! I'm back!!!"
			"omg"
			"character"
			"dfas"<< endl;

	system("pwd");

	string content;
	ifstream in("/home/shanwu/IdeaProjects/c_plus_plus_review/think_in_cpp/ch1/io_test.txt");
	ofstream out("/home/shanwu/IdeaProjects/c_plus_plus_review/think_in_cpp/ch1/io_test2.txt");
	while(getline(in,content)) {
		out <<content<<"\n";
	}
}
