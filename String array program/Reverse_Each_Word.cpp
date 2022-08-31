#include <iostream>
#include <cstring>
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

void reverseEachWord(char input[]) {
    // Write your code here
    int j = 0, i = 0;
    int n = length(input);
    
     while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            reverse(input, j, i-1);
            j = i + 1;
        }
        i++;
    }
    reverse(input, j, i - 1);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}