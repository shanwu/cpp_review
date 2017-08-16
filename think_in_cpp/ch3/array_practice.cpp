#include <iostream>
using namespace std;

typedef struct {
	string name;
	int height;
	int weight;
} student;


void print_int_array(int a[], int size) {
    for(int i =0; i < size; i++) {
        if(i+1 == size) {
            cout << a[i] << endl;
        } else {
            cout << a[i] << ", ";
        }
 
    }
}


void func_add_one(int a[], int size) {
    for(int i =0; i < size; i++) {
        a[i] += 1;
    }
}

// array cannot be passed by value in function 
void func_minus_one(int *array_pointer, int size) {
    for(int i =0; i < size; i++) {
        array_pointer[i] -= 1;
    }
}

void print_program_args(char* argv[], int argc) {
    for(int i = 0; i < argc; i++) {
        if(i+1 == argc) {
            cout << "[" << argv[i] << "]" << endl;
        } else {
            cout << "[" << argv[i] << "]" << " -- ";
        }

    }
}

int main(int argc, char* argv[]) {
    print_program_args(argv, argc);
    
    // array iteration practice
    student list[20];
    for (int i = 0; i < 20; i++) {
        list[i].name = 'a' + i;
	list[i].height = 170;
	list[i].weight = 60;
    }

    for (int i = 0; i < 20; i++) {
        cout << list[i].name << ", ";
    }

    cout << endl;

    // array pointer practice
    const int array_size = 5;
    cout << "origin: ";
    int a[array_size] = {1, 2, 3, 4, 5};
    print_int_array(a, array_size);
    cout << "after: ";
    int *array_pointer = a;
    for(int i = 0; i < array_size; i++) {
        array_pointer[i] *= 10; // pointer points to array cell and multiply 10 to the value
    }

    print_int_array(a, array_size);
    func_add_one(a, array_size);
    print_int_array(a, array_size);
    func_minus_one(a, array_size);
    print_int_array(a, array_size);        
}
