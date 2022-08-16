#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int N,rem=0,p=0,convert=0;
    cin>>N;
    for(;N>0;)
    {
        rem = N%10;
        convert = pow(2,p) *rem + convert;
        N = N / 10;
        p++;
    }
    cout<< convert << endl;
	return 0;
}
