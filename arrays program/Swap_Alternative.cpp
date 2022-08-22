void swapAlternate(int *arr, int size)
{
    //Write your code here
    int start=0;

    while(start<size-2)
    {
        int temp = arr[start];
            arr[start] = arr[start+1];
            arr[start+1] = temp;
        
        start = start+2;
    }
    
}

#include <iostream>
using namespace std;


void swapAlternate(int *arr, int size)
{
    //Write your code here
    int start=0;

    while(start<size)
    {
        int temp = arr[start];
            arr[start] = arr[start+1];
            arr[start+1] = temp;
        
        start = start+2;
    }
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}