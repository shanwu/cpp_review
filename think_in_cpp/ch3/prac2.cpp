#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    for(int i = 2; i < 50; i++) {
        bool is_prime = true;
        for(int j = 2; j < i; j++) {
            if(i%j == 0) is_prime = false;
        }
        if(is_prime) {
            cout << i << " is the prime" << endl;
        }
    }
    return 0;
}
