#include <iostream>
using namespace std;
typedef struct student {
	string name;
	int height;
	int weight;
} student;

int main() {
	student a;
	a.name = "Jon";
	a.height = 170;
	a.weight = 50;

	cout << "name: " << a.name << ", height: " << a.height << endl;
	return 0;
}
