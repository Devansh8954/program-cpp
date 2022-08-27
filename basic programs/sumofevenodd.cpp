#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,fac=1;
    cin>> n;
    if(n >0){
     for(int i=1; n>=i; n--)
    {
        fac = fac*n;
    }
    cout<< fac <<endl;
    }
    else if(n==0){
        cout<<"1";
    }
    else {
        cout<<"Error";
    }

    return 0;
}