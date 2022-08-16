#include<iostream>
using namespace std;

int main() {
	// Write your code here
    long N,convert=0;
    long rem=0,p=1;
    cin>>N;
    for(; N>0;)
    {
        rem=N%2;
        convert += (rem*p);
        p=p*10;
        N=N/2;
    }
    cout<< convert <<endl;
	return 0;
}
