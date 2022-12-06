#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> a){
    for(int i: a){
        cout << i << " ";
    }

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(){
    // vector<int> b = {1, 2, 3};

    // for(auto i = b.begin(); i != b.end(); i++){
    //     cout << *i << " ";
    // }
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;

        cin>>x;
        v.push_back(x);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}

// get input from user for length of vector. 
// Create vector and get input for each element and push in the vector. 
// Print the vector