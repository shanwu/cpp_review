#include <iostream>
#include <cassert> // contains the debugging macro
using namespace std;

bool debug = false;
int main(int argc, char* argv[]) {
    for(int i =0; i < argc; i++) {
        if(string(argv[i]) == "--debug=on") {
            debug = true;
            cout<< " debug swith is on" << endl;  
        }
    }
    int a = 1;
    if(debug) {
        assert(a!=1);
    }
    return 0;
}

