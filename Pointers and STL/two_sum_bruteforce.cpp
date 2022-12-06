/**
 * @file two_sum_bruteforce.cpp
 * @author Lokesh Shelva
 * 
 * @brief Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order. 
 * 
 * @date 2022-12-06
 *
 */

#include <iostream>

using namespace std;

int main() {
    int n=5, tar=12;
    int a[n]={1,4,5,2,8};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] + a[j] == tar){
                cout << i << " " << j << "\n"; 
                break;
            }
        }
    }

    return 0;
}
