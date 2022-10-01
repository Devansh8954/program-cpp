/*
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
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

void solve(int num,string output[],string key[],string ans,int &index)
{
      if(num==0)
    {
        output[index++]=ans;
        return;
    }
    int n=num%10;
    num/=10;
    string s=key[n];
    for(int i=0;i<s.length();i++)
    {
        solve(num,output,key,s[i]+ans,index);
    }
   
}

int keypad(int num, string output[]){
   
    string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string ans="";
    int index=0;
    solve(num,output,key,ans,index);
    return index;
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
