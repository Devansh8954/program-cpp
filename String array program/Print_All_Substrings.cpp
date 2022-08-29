#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    // Write your code here
    int n = strlen(input);
    
    for (int len = 1; len <= n; len++){
      for (int i = 0; i <= n - len; i++){
         int j = i + len - 1;
         for (int k = i; k <= j; k++)
         cout << input[k];
         cout << endl;
      }
   }
    
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}