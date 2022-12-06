/**
 * @file pair.cpp
 * @author Lokesh Shelva
 * 
 * @brief Pair couples together a pair of values, which may be of different types. 
 * The individual values can be accessed through its public members first and second.
 * 
 * @date 2022-12-06
 * 
 */

#include <iostream>
#include <utility>

using namespace std;

int main(){
    // Different ways of initilizing pair
    pair<int, int> a;
    pair<string, int> b = {"hello", 1};
    pair<int, int> c = make_pair(1, 2);

    // The first element of the pair is accessed using a.first and the second element is accessed using a.second
    cout << "\nPair a \nFirst: " << a.first << "\nSecond: " << a.second << endl;
    cout << "\nPair b \nFirst: " << b.first << "\nSecond: " << b.second << endl;
    cout << "\nPair c \nFirst: " << c.first << "\nSecond: " << c.second << endl;

    return 0;
}