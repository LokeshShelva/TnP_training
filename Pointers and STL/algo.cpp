/**
 * @file algo.cpp
 * @author Lokesh Shelva
 * 
 * @brief Important algorithms that are implemented in the STL.
 * 
 * @date 2022-12-06
 * 
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Utility function to print the vector
void print_vector(vector<int> v){
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";
}

/**
 * @brief This is a custom comparison function that can be used in the sort function. 
 * It takes two params and returns a boolean. This function will be used by sort to sort
 * the elements. A pair of elements will be passed to this function and if the function returns
 * true then the elements will be swappped or else they wont be swapped.
 * 
 * @param a 
 * @param b 
 * @return boolean
 */

bool func(int &a, int &b){
    return a > b;
}

int main(){
    vector<int> v = {3, 2, 10, 1};

    // min_element takes in iterators and returns the 
    // iterator to the minimum element between the passed iterators.
    cout << "Minimum element is: " << *min_element(v.begin(), v.end()) << "\n";

    // max_element takes in iterators and returns the 
    // iterator to the maximum element between the passed iterators.
    cout << "Maximum element is: " << *max_element(v.begin(), v.end()) << "\n";

    // sort function takes in iterators and sorts the elements in increasing 
    // order between the iterator range.
    sort(v.begin(), v.end());
    cout << "After sorting in increasing order: \n";
    print_vector(v);

    // sort function with custom comparison function
    sort(v.begin(), v.end(), func);
    cout << "After sorting in decending order using custom comparison function: \n";
    print_vector(v);

    // Reverse function takes in the iterators to start and 
    // end of the container and reverse the elements in the iterator range
    reverse(v.begin(), v.end());
    cout << "After reversing the vector: \n";
    print_vector(v);

    return 0;
}