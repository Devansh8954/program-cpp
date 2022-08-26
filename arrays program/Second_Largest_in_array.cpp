#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here
     int largest = -2e31, secondLargest = -2e31;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            secondLargest = largest;
            largest = input[i];
        }
        if (input[i] > secondLargest && input[i] < largest)
        {
            secondLargest = input[i];
        }
    }
    return secondLargest;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}