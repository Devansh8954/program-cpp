#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N,r;
    cin>>N;
    if(N>0)
    {
        for(int i=1; i*i<=N; i++)
         {
        r = i;
         }
            cout<<r <<endl;
    }
    else {
        cout <<"0";
    }
    
    
	return 0;
}
