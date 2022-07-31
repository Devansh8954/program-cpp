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
        int j=i;
        while(j>=1)
        {
            cout << j;
            j--;
        }
        cout<< endl;
        i++;
    }
    return 0;
}
