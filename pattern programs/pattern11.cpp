#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int N,i=1;
    cin >> N;
    while(i<=N)
    {
        //print space
        int k=1;
        while(k<=N-i)
        {
            cout<<" ";
            k++;
        }
        //print number
        int j=1;
        while(j<=i)
        {
            cout << j;
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}

//Input 4
 /*  1
    12
   123
  1234    */