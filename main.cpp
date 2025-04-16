/**
 * Write a program to declare a very large local array, 
 * then explore what happens when the stack size is exceeded 
 * beyond the limits of the system.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Attempting to allocate a large local array on the stack..." << endl;

    // Try changing this number to provoke or avoid a crash
    const size_t arraySize = 100000000; // 100 million ints = ~400MB

    // Declare a large local array (on stack)
    int array[arraySize];  

    cout << "Stack address of array: " << &array << endl;

    // If magically allocated, this will be outputted     
    cout << "Successfully allocated array of size " << arraySize << " on stack." << endl;

    for (int i = 0; i < 10; ++i) {
        array[i] = i * 10;
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}



// to get stack size on macOS run 
// ulimit -s
// 8176 on local machine (~8MB)