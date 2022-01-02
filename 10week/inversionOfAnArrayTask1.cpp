// ; Task 1
// ; Да се напише функция , която приема като аргументи указател към масив и размера на масива и го обръща.
// ; Примерен вход и изход при аргументи {1,2,3,4,5} 5: 5 4 3 2 1
#include <iostream>
using namespace std;
const int maxSize = 10000;
void printArray(char *array)
{
    for (int i = 0; array[i] != 0; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
int sizeOfArray(char *array)
{
    int size = 0;
    for (int i = 0; array[i] != 0; i++)
    {
        size++;
    }
    return size;
}

void revurstArray(char *array, int size)
{

    if (size < 0)
        return;
    else
    {
        cout << "*";
        char symbol = array[0];
        array[0] = array[size];
        array[size] = symbol;
        return revurstArray(array + 1, size - 2);
    }
}
int main()
{
    char array[maxSize];
    cin.getline(array, maxSize);
    revurstArray(array, sizeOfArray(array) - 1);
    printArray(array);
}
