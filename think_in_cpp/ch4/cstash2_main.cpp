#include "cstash2.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    Stash intStash;
    intStash.init(sizeof(int));
    for(int i = 0; i < 100; i++) {
        intStash.add(&i);
    }

    for(int j = 0; j < intStash.count(); j++) {
        cout << "intStash.fetch(" << j <<") = "
             << *(int*)intStash.fetch(j) << endl;
    }

    // stash for string
    Stash stringStash;
    const int bufsize = 80;
    stringStash.init(sizeof(char) * bufsize);
    ifstream in("cstash.h");
    string line;
    while(getline(in, line)) {
        stringStash.add(line.c_str());
    }

    int k = 0;
    char* cp;
    while((cp = (char*) stringStash.fetch(k++)) != 0) {
        cout << "stringStashfetch(" << k << ") = "
        << cp << endl;
    }

    intStash.clean();
    stringStash.clean();
}
