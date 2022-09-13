/*
Given the number 'n', find out and return the number of digits present in a number recursively.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1
*/

#include<iostream>
using namespace std;

int count(int n){
    //write your code here
    int size=0;
    if(n==0) {
        return 0;
     }
    int output=count(n/10);
    return output+1;
}


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}