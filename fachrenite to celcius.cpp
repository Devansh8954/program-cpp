#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 3 no"<<endl;
    int S,E,W;
    cin>>S>>E>>W;
    while(S<=E){
        int c=5.0/9*(S-32);
        cout<<S<<" "<<c<<endl;
        S=S+W;
    }
    return 0;
}