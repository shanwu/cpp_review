#ifndef STASH3_H
#define STASH3_H

class Stash {
    int size;               // Size of each space
    int quantity;           // Number of storage spaces
    int next;               // Next empty sapce
    unsigned char* storage; // Dynamically allocated array of bytes
    void inflate(int increase);
public:
    Stash(int size); // Zero quantity
    Stash(int size, int initQuantity);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();
};
#endif
