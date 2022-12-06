/**
 * @file pointers_swap.cpp
 * @author Lokesh Shelva
 * 
 * @brief This is a example of the concept of pass by reference where a pointer to the variable
 * is passed to the function instead of the actual value of the variable.
 *
 * @date 2022-12-06
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief The function takes in two pointers and swaps the values at the memory location 
 * pointed by the pointers.
 * 
 * @param a - Pointer to first value
 * @param b - Pointer to second value
 */
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 10, b = 20;
    cout << "Before swapping\na: " << a << " b: " << b; 
    
    // &a and &b returns the address of the variables and that 
    // it is passed to the swap function as a pointer.
    swap(&a, &b);
    
    cout << "\nAfter swapping\na: " << a << " b: " << b; 
    return 0;
}