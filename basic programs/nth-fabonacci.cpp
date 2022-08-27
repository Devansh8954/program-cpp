#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;

     int first=0,second=0;

       int fibo=1;

       if(n==0) 
           cout<<0;

       else if(n==1) 
           cout << 1;

       else {
        for(int i=2;i<=n;i++){

           first=second;
           second=fibo;
           fibo=first+second; 
       }

       cout<< fibo;
       }
       
       return 0;
}
