#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    char pre = input[0];
    int j = 1;
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] != pre)
        {
            input[j] = input[i];
            pre = input[i];
            j++;
        }
    }
    input[j] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}