#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
  int m=1000000007;

     int first=0,second=1;

       int fibo=1;

       if(n==0) return 0;

       else if(n==1) return 1;

       for(int i=2;i<=n;i++){

           fibo=(first+second)%m;

           first=second;

           second=fibo;

       }

       cout<< fibo;
       return 0;
}
