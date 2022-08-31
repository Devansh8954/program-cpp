#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    // Write your code here.
    int count = 1;
    int k=0;
    char lastCh = input[0];
    
    for(int i=1; i<=input.length(); i++)
    {
        if(input[i] == lastCh)
        {
            count++;
        }
        else if(count>1)
        {
            input[k] = lastCh;
            k++;
            input[k] = count +'0';
            k++;
            lastCh = input[i];
            count = 1;
        }
        else {
            input[k] = lastCh;
            k++;
            lastCh = input[i];
        }
    }
return input.substr(0, k);
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}