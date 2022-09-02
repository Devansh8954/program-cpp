#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int rs = 0, re = nRows - 1, cs = 0, ce = nCols - 1, count = 0, elements = nRows * nCols;
    while (count < elements)
    {
        for (int i = cs; i <= ce && count < elements; i++)
        {
            cout << input[rs][i] << " ";
            count++;
        }
        rs++;
        for (int i = rs; i <= re && count < elements; i++)
        {
            cout << input[i][ce] << " ";
            count++;
        }
        ce--;
        for (int i = ce; i >= cs && count < elements; i--)
        {
            cout << input[re][i] << " ";
            count++;
        }
        re--;
        for (int i = re; i >= rs && count < elements; i--)
        {
            cout << input[i][cs] << " ";
            count++;
        }
        cs++;
    }
}

void spiralPrint(int **input, int nRows, int nCols)
{  
    int r_start=0;
   int  r_end =nRows-1;
    int c_start=0;
    int c_end =nCols-1;
    int k=0;
    while(c_start<=c_end && r_start<=r_end){
        //printing first rows
        int p=c_start;
        while(p<=c_end)
        {
            cout<<input[r_start][p]<<" ";
               p++;
                k++;
        }
        
        r_start++;
        // printing last column
        int q=r_start;
        while(q<=r_end)
        {
            cout<<input[q][c_end]<<" ";
            k++;
            q++;
            
        }
        
        c_end--;
        int s=c_end;
        while(s>=c_start)
        {
            cout<<input[r_end ][s]<<" ";
            s--;
            k++;
            
        }
        r_end--;
        int t =r_end;
        while(t>=r_start)
        {
            cout<<input[t][c_start]<<" ";
            k++;
            t--;
        }
        c_start++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}