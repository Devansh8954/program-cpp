#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n,i=1;
    cin >> x >> n;
    if(n!= 0)
    {
         while(n--)
    {
        i= i*x;
    }
        cout << i;
    
    }
    else {
    cout << 1; 
    }
   
    
	return 0;
}
