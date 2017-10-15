// header file for practice c library
// an array-like entity created at runtime

typedef struct CStashTag {
    int size;
    int quantity;
    int next;
    unsigned char* storage;
} CStash;

void init(CStash* s, int size);
void clean(CStash* s);
int add(CStash* s, const void* element);
void* fetch(CStash* s, int index);
int count(CStash* s);
void inflate(CStash* s, int size);
