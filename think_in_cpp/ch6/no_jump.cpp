// The compiler even checks to make sure
// that you don’t put the object definition (and thus the constructor
// call) where the sequence point only conditionally passes through it,
// such as in a switch statement or somewhere a goto can jump past
// it. Uncommenting the statements in the following code will
// generate a warning or an error:
class X {
public:
    X();
};

X::X() {}

void f(int i) {
    if(i < 10) {
//         goto jumpl; // error: goto bypasses init
    }
    X x1; // Constructor called here
    jumpl:
    switch(i) {
        case 1:
        X x2; // Constructor called here
        break;

//        case 2: Error: case bypasses init
        X x3; // Constructor called here
        break;
    }
}


int main() {
    f(9);
    f(11);
}
