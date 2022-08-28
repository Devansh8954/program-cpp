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

void trimSpaces(char input[]) {
    // Write your code here
    int k=0;
    int len = length(input);
    for(int i=0; i<len; i++)
    {
        if(input[i] != ' ')
        {
            input[k] = input[i]; 
            k++;
  
        }
    }
      input[k] = '\0';
    
    
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

