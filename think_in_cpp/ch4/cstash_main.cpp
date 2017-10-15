#include "cstash.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
int main() {
    CStash intStash, stringStash;
    int i;
    
    // for intStash
    const int bufsize = 80;
    init(&intStash, sizeof(int));

    for(i = 0; i < 100; i++) {
        add(&intStash, &i);
    }

    for(i = 0; i < count(&intStash); i++) {
        cout << "fetch(&intStash, " << i << ") = " 
             << *(int*)fetch(&intStash, i)
             << endl; 
    }

    // for stringStash
    ifstream in;
    string line;
    char* cp;

    init(&stringStash, sizeof(char)*bufsize);
    in.open("cstash.h");
    assert(in);
    while(getline(in, line)) {
        add(&stringStash, line.c_str());
    }
   
    i = 0;
    while((cp = (char*)fetch(&stringStash,i++))!=0) {
        cout<< "fetch(&stringStash, " << i << ") = "
            << cp << endl;
    }
    clean(&intStash);
    clean(&stringStash);
    return 0;
}
