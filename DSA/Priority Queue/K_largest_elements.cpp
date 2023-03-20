/*
Code : K largest elements
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k 
largest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k
Output Format :
k largest elements
Sample Input :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output :
12
16
20
25
*/

#include <iostream>
#include <vector>
using namespace std;
#include <queue>

vector<int> kLargest(int arr[], int size, int k) {

  if (size == 0) {
    vector<int> ans;
    return ans;
  }
  priority_queue<int, vector<int>, greater<int>> help;
  vector<int> ans;
  for (int i = 0; i < k; i++) {
    help.push(arr[i]);
  }
  for (int i = k; i < size; i++) {
    if (help.top() < arr[i]) {
      help.pop();
      help.push(arr[i]);
    }
  }
  while (!help.empty()) {
    ans.push_back(help.top());
    help.pop();
  }
  return ans;
}

int main() {
	
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
    
    int k;
    cin >> k;
    
    vector<int> output = kLargest(input, size, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
	
	return 0;
}