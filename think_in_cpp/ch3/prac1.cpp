#include "prac1.h"
#include <iostream>
using namespace std;
void function(int num, bool flag) {
    string flag_text = (flag)? "true": "false";
    cout << "function( "<< num << ", "<< flag_text << ") called..."<< endl;
}
