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
        int j=1;
        char val = 65;
        while(j<=i)
        {
            char ch= val + N - j;
            cout << ch;
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}
