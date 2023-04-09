/*
Longest Increasing Subsequence
Given an array with N elements, you need to find the length of the longest subsequence in the given array such that all elements of the
 subsequence are sorted in strictly increasing order.
Input Format
The first line of input contains an integer N. The following line contains N space separated integers, that denote the value of
 elements of array.
Output Format
The first and only line of output contains the length of longest subsequence.
Constraints
1 <= N <= 10^3
Time Limit: 1 second
Sample Input 1 :
6
5 4 11 1 16 8
Sample Output 1 :
3
Sample Output Explanation
Length of longest subsequence is 3 i.e. (5,11,16) or (4,11,16).
Sample Input 2 :
3
1 2 2
Sample Output 2 :
2
*/

#include <iostream>
using namespace std;

//Memoisation
#include <bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequenceHelper(int *input, int n, int **out, int curr, int pre) {
  if(curr==n){
    return 0;
  }

  if(out[curr][pre+1] != -1){
    return out[curr][pre+1];
  }

  int take = 0;
  if(pre == -1 || input[curr]>input[pre]){
    take = 1 + longestIncreasingSubsequenceHelper(input,  n, out, curr+1, curr);
  }

  int nottake =  longestIncreasingSubsequenceHelper(input,  n, out, curr+1, pre);
  out[curr][pre+1] = max(take,nottake);
  return out[curr][pre+1];

}

int longestIncreasingSubsequence(int *input, int n) { 
  int **out = new int *[n + 1];

  for (int i = 0; i <= n; i++) {
    out[i] = new int[n + 1];
    for (int j = 0; j <= n; j++) {
      out[i][j] = -1;
    }
  }

  return longestIncreasingSubsequenceHelper(input, n, out, 0 , -1);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}