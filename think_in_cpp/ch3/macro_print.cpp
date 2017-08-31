#include <iostream>
using namespace std;
#define PRINT_VALUE(x) { \
    cout << "the value of " << #x << " is " << x << endl;\
}
// '\' tells compiler that the following line is actually the same line
int main(int argc, char* argv[]) {
    int a = 2;
    string b = "2b";
    PRINT_VALUE(a);
    PRINT_VALUE(b);
    return 0;
}
