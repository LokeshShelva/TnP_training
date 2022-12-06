#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> a){
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
    }
    cout << "\n";
}

int main(){
    stack<int> a;
    
    a.push(2);
    a.push(1);
    a.push(3);
    cout << a.top() <<  endl;
    a.pop();
    print_stack(a);

    return 0;
}