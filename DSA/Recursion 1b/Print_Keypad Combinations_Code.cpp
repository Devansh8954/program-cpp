/*
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <iostream>
#include <string>
using namespace std;

void solve(int num, string output)
{
      if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    
    string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int n=num%10;
    string s=key[n];
    
     for(int i=0;i<s.length(); i++)
    	solve(num/10,s[i]+output);

}


void printKeypad(int num){

    solve(num, "");  
}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
