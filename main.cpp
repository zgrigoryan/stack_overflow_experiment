#include <iostream>
using namespace std;

int main() {
    cout << "Attempting to allocate a large local array on the stack..." << endl;

    // const size_t arraySize = 100000000;  // 100 million ints = ~400MB
    const size_t arraySize = 100000;
    // Allocate memory on the heap
    int* array_on_heap = new int[arraySize];
    cout << "Heap address of array: " << array_on_heap << endl;
    cout << "Successfully allocated array of size " << arraySize << " on heap." << endl;

    // Attempt to allocate a large local array on the stack
    cout << "Attempting to allocate a large local array on the stack..." << endl;
    try {
        int array[arraySize];  // This is where it crashes
        cout << "Stack address of array: " << &array << endl;
        cout << "Successfully allocated array of size " << arraySize << " on stack." << endl;
    } catch (...) {
        cout << "Stack allocation failed!" << endl;
    }

    delete[] array_on_heap;  // Don't forget to free heap memory
    return 0;
}



// to get stack size on macOS run 
// ulimit -s
// 8176 on local machine (~8MB)
