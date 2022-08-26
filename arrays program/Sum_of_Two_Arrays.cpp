#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i=size1-1,j=size2-1,carry=0;
    int n = (size1 > size2) ? size1 : size2;
    
    while(n>=0)
    {
        if(i>=0 &&j>=0)
        {
            output[n] = (input1[i]+input2[j]+carry)%10;
            carry = (input1[i]+input2[j]+carry)/10;
            i--;
            j--;
            n--;
        }
        else if(i>=0)
        {
            output[n] = (input1[i]+carry)%10;
            carry = (input1[i]+carry)/10;
            i--;
            n--;
        }
        else if(j>=0)
        {
            output[n] = (input2[j]+carry)%10;
            carry = (input2[j]+carry)/10;
            j--;
            n--;
        }
        else {
            output[n] = carry;
            carry=0;
            n--;
        }
    }
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		cout << endl;
	}

	return 0;
}