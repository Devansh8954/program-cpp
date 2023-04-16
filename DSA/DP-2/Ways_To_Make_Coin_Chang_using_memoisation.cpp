/*
Ways To Make Coin Change
For the given infinite supply of coins of each of denominations, D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total
number of ways W, in which you can make the change for Value V using coins of denominations D.
Return 0 if the change isn't possible.
Input Format
The first line of the input contains an integer value N, which denotes the total number of denominations.

The second line of input contains N values, separated by a single space. These values denote the value of denomination.

The third line of the input contains an integer value, that denotes the value of V.
Output Format
Print the total total number of ways i.e. W.
Constraints :
1 <= n <= 10
1 <= V <= 1000

Time Limit: 1sec
Sample Input 1 :
3
1 2 3
4
Sample Output 1 :
4
Explanation to Sample Input 1 :
Number of ways are - 4 total i.e. (1,1,1,1), (1,1, 2), (1, 3) and (2, 2).
Sample Input 2 :
6
1 2 3 4 5 6
250
Sample Output 2 :
13868903
*/

#include <bits/stdc++.h>
using namespace std;
/*Pending function
int countWaysToMakeChangeHelper(int den[], int n, int v , int *dp) {
 if(n == 0){
    return 0;
}

if(n<0){
    return INT_MAX;
}

if(dp[n] != -1){
    return dp[n];
}

int mini = INT_MAX;
for(int i=0; i<n; i++){
    int ans = countWaysToMakeChangeHelper(den[], n, v-den[i] , dp[]);
    if(ans != INT_MAX){
        mini = min(mini , 1+ans);
    }

    return mini;
}
}

int countWaysToMakeChange(int den[], int n, int v) {
   int *out = new int [n + 1];

  for (int i = 0; i <= n; i++) {
      out[i] = -1;
    }

  return countWaysToMakeChangeHelper(den[], n, v, out);
}*/

/* Approch1
#include <bits/stdc++.h>
using namespace std;
int countWaysToMakeChange(int den[], int n, int v) {
  int dp[n][v + 1];
  for (int i = 0; i <= v; i++) {
    dp[0][i] = (v % den[0] == 0);
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= v; j++) {
      int take = 0, notTake = 0;
      notTake = dp[i - 1][j];
      if (j - den[i] >= 0)
        take = dp[i][j - den[i]];
      dp[i][j] = take + notTake;
    }
  }
  return dp[n - 1][v];
}
*/

#include <iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
//Approch 2
int countWaysToMakeChangeHelper(int den[], int v, int n , vector<vector<int>> &dp) {
        
    if(v == 0){
        return dp[n][v]=1;
    }

    if(n==0) 
        return 0;

    if(dp[n][v] != -1){
        return dp[n][v];
    }

    if(v>=den[n-1])
        dp[n][v] = countWaysToMakeChangeHelper(den,v-den[n-1],n,dp) + countWaysToMakeChangeHelper(den,v,n-1,dp);
    else
       dp[n][v] = countWaysToMakeChangeHelper(den,v,n-1,dp);        

    return dp[n][v];
}

int countWaysToMakeChange(int den[], int n, int v) {
   vector<vector<int>> out(n+1,vector<int>(v+1,-1));

  return countWaysToMakeChangeHelper(den, v, n, out);
}

int main()
{

	int numDenominations;
	cin >> numDenominations;
	
	int *denominations = new int[numDenominations];

	for (int i = 0; i < numDenominations; i++)
	{
		cin >> denominations[i];
	}

	int value;
	cin >> value;

	cout << countWaysToMakeChange(denominations, numDenominations, value);

	delete[] denominations;
}