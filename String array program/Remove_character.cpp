#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int n = strlen(input);
    int str[10000000];
    int k=0;
    
    for(int i=0; i<n; i++)
    {
        if(input[i] != c)
        {
            str[k] = input[i];
            k++;
        }
    }
    str[k] = '\0';
    
    for(int i=0; i<n; i++)
    {
        input[i] = str[i];
    }

}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}