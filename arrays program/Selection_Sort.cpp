#include <iostream>
using namespace std;

void SelectionSort(int *input, int size)
{
    //Write your code here
    for(int i=0; i<size; i++)
    {
        int min = input[i],min_index =i;
        for(int j=i+1; j<size; j++)
        {
            if(min > input[j])
            {
                min = input[j];
                min_index = j;
            }
        }
        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		SelectionSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}
}