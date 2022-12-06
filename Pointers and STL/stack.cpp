/**
 * @file stack.cpp
 * @author Lokesh Shelva
 * 
 * @brief Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), 
 * where elements are inserted and extracted only from one end of the container.
 *
 * @date 2022-12-06
 * 
 */

#include <iostream>
#include <stack>

using namespace std;

// Utility function to print the stack
void print_stack(stack<int> a){
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
    }
    cout << "\n";
}

int main(){
    //  Initializing stack
    stack<int> a;
    
    // Pushing elements into the stack
    a.push(1);
    a.push(2);
    a.push(3);

    // Printing the top element of the stack
    cout << "Top of the stack is: " << a.top() <<  endl;

    // Popping the top element of the stack
    a.pop();

    cout << "Stack after popping top element: \n";
    print_stack(a);

    return 0;
}