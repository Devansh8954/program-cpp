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
        for(int j=1; j<=i; j++)
        {
            cout <<"*";
        }
        cout<< endl;
    }
    return 0;
}
