#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N,a[N],sum=0;
    cin>>N;
    
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<N; i++)
    {
        sum += a[i];
    }
    
    cout<<sum <<endl;    
}
