/*
Code : Minimum Count
Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}. The output will be 1, as 1 is the minimum count 
of numbers required to represent N as sum of squares.
Input format :
The first and the only line of input contains an integer value, 'N'.
 Output format :
Print the minimum count of numbers required.
Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec
Sample Input 1 :
12
Sample Output 1 :
3
Explanation of Sample Output 1 :
12 can be represented as : 
A) (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2)

B) (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2)  + (2 ^ 2)

C) (1^2) + (1^2) + (1^2) + (1^2) + (2 ^ 2) + (2 ^ 2)

D) (2 ^ 2) + (2 ^ 2) + (2 ^ 2)

As we can see, the output should be 3.
Sample Input 2 :
9
Sample Output 2 :
1
*/

#include <bits/stdc++.h>
using namespace std;

int minCount(int n) {
  if (n <= 3)
    return n;
  int *arr = new int[n + 1];
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 3;
  for (int i = 4; i <= n; i++) {
    arr[i] = i;
    int x = 1;
    while (x * x <= i) {
      arr[i] = min(arr[i], 1 + arr[i - (x * x)]);
      x++;
    }
  }
  return arr[n];
}
/*
int minCount(int N){
    vector<int> dp(N+1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j*j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }

    return dp[N];
}
*/


int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}