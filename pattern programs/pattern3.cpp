#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int N;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        //print space
        for(int k=1; k<=N-i; k++)
        {
            cout<<" ";
        }
        //print before number
        for(int j=1; j<=i; j++)
        {
            cout <<"*";
        }

        //print after number
        for(int j=2; j<=i; j++)
        {
            cout <<"*";
        }
        cout<< endl;
    }
    return 0;
}


/*
    Input 4
      *
     ***
    *****
   *******                

*/