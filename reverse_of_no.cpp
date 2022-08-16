#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N,rem=0,reverse=0;
    cin>>N;
    for(;N>0;)
    {
        rem = N%10;
        reverse = reverse * 10 + rem;
        N = N / 10;
    }
    cout<< reverse;
	return 0;
}
