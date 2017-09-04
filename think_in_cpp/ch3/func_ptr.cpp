#include <iostream>
using namespace std;

void func() {
    cout << "func() called ..." << endl;
}

int main() {
    void (*fp)(); // define a function pointer
    fp = func; // point to func()
    (*fp)(); // dereferencing calls the func() 
    
    void (*fp2)() = func; // define and point to func()
    (*fp2)();    // dereferencing
    return 0;
}
