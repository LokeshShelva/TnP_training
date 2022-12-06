/**
 * @file set.cpp
 * @author Lokesh Shelva
 * 
 * @brief Sets are containers that store unique elements following a specific order.
 * In a set, the value of an element also identifies it (the value is itself the key, of type T), 
 * and each value must be unique. The value of the elements in a set cannot be modified once 
 * in the container (the elements are always const), but they can be inserted or removed from the container.
 * 
 * @date 2022-12-06
 * 
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Utility function to print the set
void print_set(set<int> s){
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> v = {10, 10, 20, 30};

    // Different ways of initializing sets
    set<int> a;
    set<int> b = {1, 2, 3, 1};
    // Initializing set from vector
    set<int> c(v.begin(), v.end());

    cout << "Before inseting elements: \n";
    print_set(a);
    
    // Inserting elements into set
    a.insert(10);
    a.insert(20);

    cout << "After inserting elements: \n";
    print_set(a);

    // Removing element from the set
    a.erase(10);

    cout << "After removing element: \n";
    print_set(a);
    
    // Finding a speciic element in the set.
    // The find function returns the iterator to the found element if it is present in the set.
    // Else it returns iterator pointing to the ennd of the set.
    if(a.find(5) == a.end()){
        cout << "Element 5 not found" << endl;
    }else {
        cout << "ELement 5 found" << endl;
    }

    // Getting the iterator to the set;;
    set<int>::iterator i = a.begin();

    cout << "Set b:\n ";
    print_set(b);
    cout << "Set c: \n";
    print_set(c);
    return 0;
}