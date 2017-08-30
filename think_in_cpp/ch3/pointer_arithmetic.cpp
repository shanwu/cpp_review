#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int a[3] = {1,2,3};
    double b[3] = {1.1,2.2,3.3};

    int* int_ptr = a;
    double* double_ptr = b;
    
    long int_addr_origin = (long) int_ptr;
    cout << "int_ptr: " << int_addr_origin << endl;
    int_ptr++;
    long int_addr_added = (long) int_ptr;
    cout << "int_ptr: " << int_addr_added << endl 
         << "difference: " << int_addr_added - int_addr_origin << " byte(s)" <<endl
         << "size of int: " << sizeof(int) << "byte(s)" << endl;
 
    long double_addr_origin = (long) double_ptr;
    cout << "double_ptr: " << double_addr_origin << endl;
    double_ptr++;
    long double_addr_added = (long) double_ptr;
    cout << "double_ptr: " << double_addr_added << endl
         << "difference: " << double_addr_added - double_addr_origin << " byte(s)" << endl    
         << "size of double: " << sizeof(double) << " byte(s)"<< endl;
    return 0;
}
