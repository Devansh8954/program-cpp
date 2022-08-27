#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,s,count=1;
    cin>>x;
    for(int i=1; count<=x; i++)
    {
        s = 3*i+2;
        if(s%4 != 0)
        {
            cout << s <<" ";
            count++;
        }  
    }
	return 0;
}
