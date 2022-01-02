#include <iostream>
using namespace std;
int const size = 3;
void fillMatrix(int matrix[][size], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
    }
}
void printMatrix(int matrix[][size], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
void rotationMatrix(int matrix[size][size],int size)
{ 
    for (int i = 0; i < size; i++)
    { int number=0;
        for (int j = size-1; j >= 0; j--)
        cout<<matrix[j][i]<<" ";
 cout<<endl;       
    }
}  
int main()
{
    int matrix[size][size];
    fillMatrix(matrix, size);
    printMatrix(matrix, size);
rotationMatrix(matrix,size);
printMatrix(matrix,size);
}