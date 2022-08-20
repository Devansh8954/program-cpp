de <iostream>
using namespace std;

#include "solution.h"

int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    int s=0;
    
    if(arr>0)
    {
    for(int i=0; i<n; i++)
     {
        if(arr[i] == x)
        {
            s=i;
        }
     }
    
    if(s == x)
    {
        return s;
    }
    else
    {
        return -1;
    }

        
    }
    
    
    else if(arr == 0){
        return -1;
    }
    
    else {
        return 0;
}
    
       
}

    

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
}