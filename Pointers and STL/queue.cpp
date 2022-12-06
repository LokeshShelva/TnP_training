#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    cout << a.front() << endl;
    a.pop();
    print_queue(a);
}