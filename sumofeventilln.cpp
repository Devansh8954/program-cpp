#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N,i=1,sum=0;
    cin>>N;
    while(i<=N)
    {
        if(i%2==0){
          sum += i;
        }
        i++;
    }
    cout<< sum;
}