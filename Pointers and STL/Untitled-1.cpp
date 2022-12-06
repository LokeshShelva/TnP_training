#include <iostream>
#include <map>
#include <vector>

using namespace std;

template <typename T1, typename T2>
void print_map(map<T1, T2> m){
    for(auto i = m.begin(); i != m.end(); i++){
        cout << (*i).first << " " << (*i).second << "\n";
    }
    cout << "----\n";
}

int main() {
    int n=5,tar=12;
    int a[n]={1,4,5,2,8};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==tar){
                cout<<i<<" "<<j << "\n"; 
                break;
            }
        }
    }

    return 0;
}

// 1 4 5 2 8 |   12
// 1, 4