/*
Check Max-Heap
Send Feedback
Given an array of integers, check whether it represents max-heap or not. Return true if the given array represents max-heap,
else return false.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the 
symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.
Output Format :
The first and only line of output contains true if it represents max-heap and false if it is not a max-heap.
Constraints:
1 <= N <= 10^5
1 <= Ai <= 10^5
Time Limit: 1 sec
Sample Input 1:
8
42 20 18 6 14 11 9 4
Sample Output 1:
true
*/

#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n) {
    // Write your code here
    if(n==0){
        return true;
    }
    bool ans = true;
     int pi = 0;
     int left = (2*pi)+1;

     while(left<n){
          left = (2*pi)+1;
         int right = (2*pi)+2;

         if(right<n){
              if(arr[pi] >= arr[left] && arr[pi] >= arr[right]){
                  ans = true;
              }
              else {
                  return false;
              }
         }
         else {
             if(arr[pi] >= arr[left]){
                 ans = true;
             }
             else {
                  return false;
             }
         }
         pi++;
     }

    return ans;
}


int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}