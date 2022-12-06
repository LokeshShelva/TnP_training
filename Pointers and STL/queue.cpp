/**
 * @file queue.cpp
 * @author Lokesh Shelva 
 * 
 * @brief Queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), 
 * where elements are inserted into one end of the container and extracted from the other.
 * 
 * @date 2022-12-06
 *   
 */

#include <iostream>
#include <queue>

using namespace std;

// Utility function to print the queue
void print_queue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    // Initialize a empty queue
    queue<int> a;
    
    // Enqueueing elements into the queue 
    a.push(1);
    a.push(2);
    a.push(3);
    
    cout << "First element of the queue is: " << a.front() << endl;
    
    // Dequeueing element from the queue
    a.pop();

    cout << "Queue after dequeueing: \n";
    print_queue(a);
}