/*
Reverse Word Wise
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. 
Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/

#include <iostream>
using namespace std;

int length(char input[]) {
    int count = 0;
    for(int i=0; input[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char input[], int start, int end)
{
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    int j = 0, i = 0;
    int n = length(input);
    reverse(input, 0, n - 1);
    
     while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            reverse(input, j, i - 1);
            j = i + 1;
        }
        i++;
    }
    reverse(input, j, i - 1);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
