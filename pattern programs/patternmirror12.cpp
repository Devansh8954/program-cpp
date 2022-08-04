#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    cin>>N;
    int i=N;
    while(i>=1)
    {
        int j=N;
        while(j>=(N-i+1))
        {
            cout<< i;
            j--;
        }
        cout<<endl;
        i--;
    }
  
}
