#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N , choice;
    cin >> N;
    cin >> choice;
    if(choice == 1)
    {
        int sum=0;
        for(int i=1; i<=N; i++)
        {
            sum += i;
        }
        cout << sum << endl;
    }
    else if(choice == 2)
    {
        int pro=1;
        for(int i=1; i<=N; i++)
        {
            pro *= i;
        }
        cout << pro << endl;
    }
    else {
        int o = -1;
        cout << o << endl;
    }
    
    return 0;
}
