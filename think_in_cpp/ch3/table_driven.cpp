#include <iostream>
using namespace std;
#define DF(A) void A() { \
    cout << "function "  #A  " called" << endl;\
}

DF(a);
DF(b);
DF(c);
void (*func_table[]) () = {a, b, c};

int main(int argc, char* argv[]) {
    while(true) {
        cout << "Press a key from 'a' to 'g' or q to quit" << endl;
        char c, cr;
        cin.get(c);
        cin.get(cr); // for CR in the end of line
        if(c == 'q') break;

        if( c < 'a' || c > 'c') continue;
       
        (*func_table[c-'a'])();

    }
    return 0;
}
