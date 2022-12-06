#include <iostream>

using namespace std;

int main() {
    // Allocating memory using malloc function. It takes in the size of memory to be allocated.
    // It returns the pointer to the allocated memory.
    int *a = (int *) malloc(sizeof(int)); // Allocating memory for 1 integer

    // Setting the value at the memory address.
    *a = 10;
    cout << "Address of pointer a: " << a << endl;
    cout << "Value at address " << a << " is: " << *a << endl;

    int *b = (int *) malloc(2 * sizeof(int)); // Allocating memory for 2 integers
    *b = 1;
    cout << "Address of b: " << b << "\nValue at " << b << " is: " << *b << endl;
    // Using pointer arithmetic to move the pointer
    b++; 
    *b = 2;
    cout << "Address of b: " << b << "\nValue at " << b << " is: " << *b << endl;

    return 0;
}