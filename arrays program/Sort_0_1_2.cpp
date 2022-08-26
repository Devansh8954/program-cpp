#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    int count_0=0,count_1=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            count_0 ++;
        }
        else if(arr[i] == 1)
        {
            count_1++;
        }
    }
    
    int k=0;
    
    for(int i=0; i<count_0; i++)
    {
        arr[k] = 0;
        k++;
    }
    
    for(int i=count_0; i<(count_1+count_0); i++)
    {
        arr[k] = 1;
        k++;
    }
    
    for(int i=(count_1+count_0); i<n; i++)
    {
        arr[k] = 2;
        k++;
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}