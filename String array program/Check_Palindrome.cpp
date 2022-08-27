#include <iostream>
#include <cstring>
using namespace std;

int length(char str[]) {
    int count = 0;
    for(int i=0; str[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}


bool checkPalindrome(char str[]) {
    // Write your code here
    int len = length(str);
    int i=0,j=len-1;
    while(i<j)
    {
        if(str[i] != str[j])
        {
           return false;
        }
        i++;
        j--;
    }
        return true;  
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}