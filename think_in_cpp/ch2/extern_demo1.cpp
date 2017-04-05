#include <iostream>
using namespace std;

int global = 12;
void func();
int main() {
	cout << "global: " << global << endl;
	cout << "global address: " << &global << endl;
	func();
	cout << "global: " << global << endl;
	cout << "global address: " << &global << endl;
	return 0;
}
