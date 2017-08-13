#include <iostream>
using namespace std;

union Packed {
	char c;
	double d;
	float f;
};

int main() {
	Packed p;
    cout << "size of Packed: " << sizeof(Packed)
    		<< ", size of char: " << sizeof(char)
			<< ", size of double: " << sizeof(double)
			<< ", size of float: " << sizeof(float) << endl;
	p.c = 'c';
    cout << "size of Packed: " << sizeof(Packed)
    		<< ", size of char: " << sizeof(char)
			<< ", size of double: " << sizeof(double)
			<< ", size of float: " << sizeof(float) << endl;
    cout << "Packed: " << p.c << endl;
    p.d = 123.456;
    cout << "Packed: " << p.c << endl;
	return 0;
}
