#include <iostream>
using namespace std;
const int size = 100;
void fillMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {cout <<"matrix["<<i<<"]["<<j<<"]=";
            cin >> matrix[i][j];
        }
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
void multiplyMatrix(int matrixA[][size], int matrixB[][size], int rows, int cols, int cols1, int multiplyMatrixAAndMatrixB[][size])
{
    int counter1 = 0;
    for (int i = 0; i < rows; i++)
    {
        int counter2 = 0;
        for (int j = 0; j < cols1; j++)
        {
            for (int z = 0; z < cols; z++)
                multiplyMatrixAAndMatrixB[i][j] += matrixA[counter1][z] * matrixB[z][counter2];
            counter2++;
        }

        counter1++;
    }
}

int main()
{
    int martixA[size][size];
    int rows, cols;
    cout<<"MatrixA"<<endl;
    cout << "rows=";
    cin >> rows;
    cout << "cols=";
    cin >> cols;
    fillMatrix(martixA, rows, cols);
    printMatrix(martixA, rows, cols);
    int martixB[size][size];
    int rows1, cols1;
    cout<<"MatrixB"<<endl;
    do
    {
        cout << "rows1=";
        cin >> rows1;
    } while (rows1 != cols);
    cout << "cols1=";
    cin >> cols1;
    int multiplyAB[size][size];
    fillMatrix(martixB, rows1, cols1);
    printMatrix(martixB, rows1, cols1);
    multiplyMatrix(martixA, martixB, rows, cols, cols1, multiplyAB);
    cout<<"\nMultipy MatrixA and MatrixB"<<endl;
    printMatrix(multiplyAB, rows, cols1);
}