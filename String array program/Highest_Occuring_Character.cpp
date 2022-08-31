#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int n = strlen(input);
    int freq[256] ={0};
    int maxindex=0, max=0;

    for(int i=0;i<n;i++) 
    {
        freq[input[i]]++; 
    }
    
   for(int i=0;i<256;i++)
   {
        if(freq[i]>max)
        {
            max = freq[i];
            maxindex = i;
        }
    }
    return char(maxindex);
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}