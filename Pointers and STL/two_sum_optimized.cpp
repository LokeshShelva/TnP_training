/**
 * @file two_sum_optimized.cpp
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
#include <map>

using namespace std;

int main() {
    int n = 5, tar = 12;
    int a[n] = {1,4,5,2,8};
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        int el = tar - a[i]; 
        if(mp.find(el) == mp.end()){
            mp[a[i]] = i;
        }else{
            cout << i << " " << mp[el];
        }
    }

    return 0;
}