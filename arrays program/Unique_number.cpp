#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size; i++)
    {
        int jg=-1;
        for(int j=0; j<size; j++)
        {
            if (arr[i]==arr[j])
                    {
                        jg++;
                    }
        }
        if (jg==0)
            {
                return arr[i];
            }
    }
     return arr[0];
    
    
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}