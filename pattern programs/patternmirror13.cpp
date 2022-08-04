#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N,val=1,i=1,l=2;
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
        //print before number
        int j=1;
        val=i;
        while(j<=i)
        {
            cout << val;
            val++;
            j++;
        }

        //print after number
        while(l<=i)
        {
            cout << l;
            l= l++;
        }
        i++;
        cout<<endl;

    }
    return 0;
}