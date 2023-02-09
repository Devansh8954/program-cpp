/*
Largest Row or Column
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the 
elements in a row/column) amongst all the rows and columns.
Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 
'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.
Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.

Output for every test case will be printed in a seperate line.
Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
Constraints :
1 <= t <= 10^2
1 <= N <= 10^3
1 <= M <= 10^3
Time Limit: 1sec
*/

#include <iostream>
#include<climits>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    char ans='r';
    int c=0;
   	int maxx=INT_MIN;
    for(int i=0;i<nRows;i++){
        int sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum+=input[i][j];
        }
        if(sum>maxx){
            maxx=sum;
            c=i;
            ans='r';
     	}
    }


     for(int i=0;i<mCols;i++){
            int sum=0;
            for(int j=0;j<nRows;j++){
                sum+=input[j][i];
            }
            if(sum>maxx){
                maxx=sum;
                c=i;
                ans='c';
            }
    }

    if(ans=='r')
        cout<<"row"<<" "<<c<<" "<<maxx;
    else if(ans=='c')
        cout<<"column"<<" "<<c<<" "<<maxx;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}