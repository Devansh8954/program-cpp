#include <iostream>
#include <cstring>
using namespace std;


bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int n1 = strlen(input1);
    int n2 = strlen(input2);
    int k =0;
    
    if(n1 != n2)  {
        return false;
    }
    
   // abcdez
   // baedcz
    
    int freq[256] ={0};
    
    // freq[0] =0
    // freq[97] = 0
    
    for(int i=0;i<n1;i++) {
        freq[input1[i]]++; // freq[97] = 0
    }
    
    // +
    
    for(int i=0;i<n2;i++) { // freq[98] = 0
        freq[input2[i]]--;
    }
    //+
    
    // n1 + n2 + 256 = n1 + n2 = n
    
    for(int i=0;i<256;i++) {
        if(freq[i] != 0) {
            return false;
        }
    }
    
    return true;
}
  

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}