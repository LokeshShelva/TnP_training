/**
 * @file vectors.cpp
 * @author Lokesh Shelva
 * 
 * @brief Vectors are sequence containers representing arrays that can change in size.
 * Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements 
 * can also be accessed using offsets on regular pointers to its elements, and just as efficiently 
 * as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled 
 * automatically by the container.
 * 
 * @date 2022-12-06
 *
 */

#include <iostream>
#include <vector>

using namespace std;

// Utility function to print the vector
void print_vector(vector<int> a){
    for(int i: a){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    // Different ways of initializing vectors.
    vector<int> a;
    vector<int> b = {1, 2, 3};
    // Initialize of vector of size 5 with default values.
    vector<int> c(5);
    // Initialize a vector of size 5 with default value as 10.
    vector<int> d(5, 10);

    cout << "Before inserting elements: \n";       
    print_vector(a);

    // Inserting element to the back of the vector
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    cout << "After inserting elements: \n";
    print_vector(a);

    // Removing element from the back of the vector
    a.pop_back();
    cout << "After removing the last element: \n";
    print_vector(a);

    // Getting iterator to the vector
    vector<int>::iterator i = a.begin();
    // Concise way of getting iterator to the vector.
    auto j = a.begin();

    cout << "Vector B: \n";
    print_vector(b);
    cout << "Vector C: \n";
    print_vector(c);
    cout << "Vector D: \n";
    print_vector(d);
}