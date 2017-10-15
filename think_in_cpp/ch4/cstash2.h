// c++ style stash
struct Stash {
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void init(int size);
    void clean();
    int add(const void* element);
    void* fetch(int index);
    int count();
    void inflate(int increase);
    
};
