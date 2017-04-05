/*
 * vector_demo.cpp
 * compile this demo by executing the following cmd:
 * #g++ vector_demo.cpp -o vector_demo
 *      Author: shanwu
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> list;
	string input;
	cout << "Please enter names: "<<endl;
	cin >> input;
	while(input.compare("done")) {
		list.push_back(input);
		cin >> input;
	}

	for(int i = 0; i < list.size(); i++) {
		cout << list[i]+" ";
	}
	cout << endl;


	return 0;
}



