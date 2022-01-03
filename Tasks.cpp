// Напишете функция, която приема и модифицира матрица с n реда и m колони.
// Функцията да модифицира матрицата по следния начин:
// Първата колона на матрицата да се избута с една позиция надолу (всеки елемент
// отива на долния ред, а най-долният отива най-отгоре).
// Втората колона на матрицата да се избута с две позиции надолу (най-долните два
// елемента отиват най-отгоре)
// Третата колона с три позиции и аналогично за останалите колони.
// Пример:
// Вход: Изход:
// 1 2 3 10 8 6
// 4 5 6 1 11 9
// 7 8 9 4 2 12
// 10 11 12 7 5 3
#include <iostream>
using namespace std;
const int size = 100;
void fillMatrix(int matrix[][size], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
}
void printMatrix(int matrix[][size], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void newMatrix(int newMatrix[][size], int n, int m)
{
    for (int j = 0; j < m; j++)
    {   int counter1=j%m;
        int counter = 0;
        while (counter != counter1+ 1)
        {

            int number = newMatrix[0][j];
            for (int i = 0; i < n - 1; i++)
            {
                newMatrix[i][j] = newMatrix[i + 1][j];
            }
            newMatrix[n - 1][j] = number;
            counter++;
        }
    }
}
int main ()
{
int n=3,m=4;
int matrix[n][size];
fillMatrix(matrix,n,m);
printMatrix(matrix,n,m);
newMatrix(matrix,n,m);
printMatrix(matrix,n,m);
}