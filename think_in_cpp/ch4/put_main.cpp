#include <iostream>
#include "put.h"
using namespace std;

int main(int argc, char** argv) {
    if(argc < 2) 
    {
        cout << "Please enter font color!" <<endl;
        return -1;
    }
    Put put;
    put.set_color(argv[1]);
    cout<< "color attribut: " << put.get_color() << endl;
}
