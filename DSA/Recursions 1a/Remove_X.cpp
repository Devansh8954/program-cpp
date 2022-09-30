/*
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
*/

#include <iostream>
#include <cstring>
using namespace std;

void removeXHelper(char input[], int currentIndex, int nextIndex)
{
    if (input[currentIndex] == '\0')
    {
        input[nextIndex] = '\0';
        return;
    }
    if (input[currentIndex] != 'x')
    {
        input[nextIndex] = input[currentIndex];
        removeXHelper(input, currentIndex + 1, nextIndex + 1);
    }
    else
    {
        removeXHelper(input, currentIndex + 1, nextIndex);
    }
}

void removeX(char input[])
{
    removeXHelper(input, 0, 0);
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
