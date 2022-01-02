#include <iostream>
using namespace std;
const int size = 100;
const int n = 3;
void fillMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            {cin >> matrix[i][j];}
    }
}
void printMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
void transportMatrix(int trMatrix[][size],int matrix [][size],int rows,int cols )
{   
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            trMatrix[j][i]= matrix[i][j];
    }
}
void printTransportMatrix(int trMatrix[][size],int rows,int cols )
{   
     for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            cout<<trMatrix[i][j]<<"\t";
            cout<<endl;
    }
}
bool isSymmetric(int trmatrix[][size],int matrix[][size],int rows,int cols)
{    
     for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            if(matrix[i][j]!=trmatrix[i][j]) return 0;
    }
    return 1;
}
int main()
{
    int martix[size][size];
    int rows, cols;
    cout << "rows";
    cin >> rows;
    cout << "cols=";
    cin >> cols;
    int trmatrix[size][size];
    fillMatrix(martix, rows, cols);
    printMatrix(martix, rows, cols);
    transportMatrix(trmatrix,martix,rows,cols);
    printTransportMatrix(trmatrix,rows,cols);
   cout<<boolalpha<<isSymmetric(trmatrix,martix,rows,cols);
    
}