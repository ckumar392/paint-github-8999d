#include <iostream>
using namespace std;

#define Row 4
#define Col 4

void printSpiralOrder(int X[Row][Col], int m, int n)
{
    int rowStart = 0, rowEnd = m - 1;
    int colStart = 0, colEnd = n - 1;
    
    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int i = colStart; i <= colEnd; i = i + 1)
            cout << X[rowStart][i] << " ";
        
        rowStart = rowStart + 1;
        
        for (int i = rowStart; i <= rowEnd; i = i + 1)
            cout << X[i][colEnd] << " ";
        
        colEnd = colEnd - 1;
        
        if (rowStart <= rowEnd)
        {
            for (int i = colEnd; i >= colStart; i = i - 1)
                cout << X[rowEnd][i] << " ";
              
            rowEnd = rowEnd - 1;
        }
        
        if (colStart <= colEnd)
        {
            for (int i = rowEnd; i >= rowStart; i = i - 1)
                cout << X[i][colStart] << " ";
            
            colStart = colStart + 1;
        }
    }
}

int main()
{
    // Driver code
    int X[Row][Col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 3, 9}, {3, 4, 5, 6} };
    printSpiralOrder(X, Row, Col);
    cout<<endl;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
            cout<<X[i][j]<<" ";
        cout<<endl;
    }
    // Output = 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
    return 0;
}