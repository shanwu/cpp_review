#include <iostream>
using namespace std;

#define DEBUG
#ifdef DEBUG
    #define LOG_SWITCH true
#endif

#ifndef DEBUG
    #define LOG_SWITCH false
#endif

bool runtime_debug_flag = false;

int main(int argc, char* argv[]) {
    if(LOG_SWITCH) {
        cout<< "macro debug flag is on" << endl;
    } else {
        cout<< "macro debug flag is off" << endl;
    }

    for(int i =0; i < argc; i++) {
        if(string(argv[i]) == "--debug=on") {
            runtime_debug_flag = true;
        }
    }

    if(runtime_debug_flag) {
        cout<< "Runtime debug is on" << endl;
    }

    string reply;
    while(true) {
        getline(cin, reply); // get the whole line
        cout << "input: " << reply << endl;
        if(reply == "debug off") {
            cout<< "Runtime debug is off" << endl;
            runtime_debug_flag = false; 
        } else if(reply == "debug on") {
            cout<< "Runtime debug is on" << endl;
            runtime_debug_flag = true;
        } else if (reply == "q" || reply == "quit") {
            cout<< "exit..." << endl;
            break;
        }
    }

    return 0;
}
