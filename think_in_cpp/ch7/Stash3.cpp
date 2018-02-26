#include "Stash3.h"
#include <iostream>

const int increment = 100;

Stash::Stash(int sz) {
    size = sz;
    quantity = 0;
    next = 0;
    storage = 0;
}

Stash::Stash(int sz, int initQuantity) {
    size = sz;
    quantity = 0;
    next = 0;
    storage = 0;
    inflate(initQuantity);
}

Stash::~Stash() {
    if(storage!=0) {
        std::cout<< "free storage" << std::endl;
        delete [] storage;
    }
}

int Stash::add(void* element) {
    if(next >= quantity) {
        inflate(increment);
    }

    // Copy element into storage, starting at next empty space
    int startBytes = next * size;
    unsigned char* e = (unsigned char*) element;
    for(int i =0; i < size; i++) {
        storage[startBytes + i] = e[i];
    }

    next++;
    return (next - 1);
}

void* Stash::fetch(int index) {
    if(index >= next) {
        return 0;
    }

    return &(storage[index*size]);
}

int Stash::count() {
    return next;
}

void Stash::inflate(int increase) {
    if(increase == 0) return;
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char* b = new unsigned char[newBytes];
    for(int i = 0; i < oldBytes; i++) {
        b[i] = storage[i]; // Copy old to new
    }
    delete [](storage); // release old storage
    storage = b; // point to new memory
    quantity = newQuantity;
}
