#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int N,val;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        //print space
        for(int k=1; k<=N-i; k++)
        {
            cout<<" ";
        }
        val=i;
        //print number
        for(int j=1; j<=i; j++)
        {
            cout << val;
            val++;
        }
        cout<< endl;
    }
    return 0;
}


 // Input 4
 /*  
 Output
      1
     23
    345
   4567    */