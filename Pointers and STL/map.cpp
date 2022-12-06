#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Utitlity function to print the map
template <typename T1, typename T2>
void print_map(map<T1, T2> m){
    for(auto i = m.begin(); i != m.end(); i++){
        cout << (*i).first << " " << (*i).second << "\n";
    }
    cout << "----\n";
}

int main() {
    vector<pair<int, int>> v = {{1, 2}, {3, 4}};

    // Different ways of initializing the maps
    map<int, int> a;
    // Initializing map using a list
    map<string, int> b = {
        {"hello", 1},
        {"world", 2}
    };
    // Initilizing map from a vector of pairs.
    map<int, int> c(v.begin(), v.end());

    // Settting a key value pair in the map
    // If the key doesnt exist, new key is created and the value is added
    // Else the value of the key is updated.
    b["hi"] = 10;
    cout << "After adding key, value pair, map b is: \n";
    print_map<string, int>(b);

    // Removing a key value pair from the map
    b.erase("hi");
    cout << "After erasing key, value from map, b is: \n";
    print_map<string, int>(b);
    
    // Accesing the value corresponding to the key.
    cout << "Value for key 'hello' is: " << b["hello"] << endl;
    
    // Getting the iterator to a map
    map<int, int>::iterator i = a.begin();

    cout << "Map a: \n";
    print_map<int, int>(a);
    cout << "Map b: \n";
    print_map<string, int>(b);
    cout << "Map c: \n";
    print_map<int, int>(c);

    return 0;
}