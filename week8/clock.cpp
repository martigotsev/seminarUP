#include <iostream>
using namespace std;
const int size = 100;
void fillMatrix(int matrix[][size], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {//cout <<"matrix["<<i<<"]["<<j<<"]=";
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

void print(int matrix[][size], int rows, int cols)
{
    int q=rows;
    cout<<q*q;cout<<endl;
    int newrows=0;
    int newcols=0;
    int p=0;
    int count=0;
    while(count!=q*q){
    while (newrows!=rows)
    {
        cout<<matrix[newrows][newcols]<<"  ";
      newrows++;  
      
      count++;
    }if (count==q*q) return;
    
    newrows--;
    newcols++;
    
    while (newcols!=cols)
    {
        cout<<matrix[newrows][newcols]<<"  ";
      newcols++;  
    
      count++;
    }if (count==q*q) return;
    newcols--;
    newrows--;
    while ((newrows)!=(p-1))
    {
        cout<<matrix[newrows][newcols]<<"  ";
      newrows--;  
      count++;

    }if (count==q*q) return;
    newrows++;
    newcols--;
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
    while((newcols)!=p)
{
    cout<<matrix[newrows][newcols]<<"  ";
    newcols--;
    if (count==q*q) return;
      count++;
      
}
    newrows++;
    newcols++;
    rows--;
    cols--;p++;

}}
int main()
{
    int martixA[size][size];
    int rows, cols;
    cout<<"MatrixA"<<endl;
    cout << "rows=";
    cin >> rows;
    do{
    cout << "cols=";
    cin >> cols;
    }while(rows!=cols);
    fillMatrix(martixA, rows, cols);
    printMatrix(martixA, rows, cols);
    print(martixA,rows,cols);
}