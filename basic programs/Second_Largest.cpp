#include<iostream>
using namespace std;
#include <climits>

int main(){
    int n;
    cin>>n;
    int max=INT_MIN,secondMax=INT_MIN;
    int num;
    int count=1;
    
    for(; count<=n; count++){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
    }
    cout<<secondMax<<endl;
    
}
