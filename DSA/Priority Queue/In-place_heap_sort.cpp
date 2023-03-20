/*
Code : In-place heap sort
Send Feedback
Given an integer array of size N. Sort this array (in decreasing order) using heap sort.
Note: Space complexity should be O(1).
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array or N.
The following line contains N space separated integers, that denote the value of the elements of the array.
Output Format :
The first and only line of output contains array elements after sorting. The elements of the array in the output are 
separated by single space.
Constraints :
1 <= n <= 10^6
Time Limit: 1 sec
Sample Input 1:
6 
2 6 8 5 4 3
Sample Output 1:
8 6 5 4 3 2
*/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void heapSort(int pq[], int n) {
  if (n == 0) {
    return;
  }
  // inserting array in min heap
  for (int i = 1; i < n; i++) {

    int ci = i;
    // up heapyfy
    while (ci > 0) {
      int pi = (ci - 1) / 2;
      if (pq[ci] < pq[pi]) {
        swap(pq[ci], pq[pi]);
      } else {
        break;
      }
      ci = pi;
    }
  }
  //   deleting array element in min heap
  int i = n;
  while (i > 0) {
    swap(pq[0], pq[i - 1]);
    i--;
    int pi = 0;
    int lci = 2 * pi + 1;
    int rci = 2 * pi + 2;
    // down heapyify
    while (lci < i) {
      int mi = pi;
      if (pq[mi] > pq[lci]) {
        mi = lci;
      }
      if (rci < i && (pq[rci] < pq[mi])) {
        mi= rci;
      }
      if (mi == pi)
        break;
      swap(pq[pi], pq[mi]);
      pi = mi;
      lci = 2 * pi + 1;
      rci = 2 * pi + 2;
    }
  }
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}