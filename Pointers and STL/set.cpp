#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print_set(set<int> s){
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> v = {10, 10, 20, 30};

    set<int> a;
    set<int> b = {1, 2, 3, 1};
    set<int> c(v.begin(), v.end());

    a.insert(10);
    a.insert(20);
    // if(a.find(5) == a.end()){
    //     cout << "not found" << endl;
    // }else {
    //     cout << "found" << endl;
    // }

    set<int>::iterator i = a.begin();

    print_set(a);
    print_set(b);
    print_set(c);
    return 0;
}