// Да се напише функция, която приема като аргументи указател към масив и размера на масива и го сортира във възходящ ред (като упражнение да се направи и за низходящ).
// Примерен вход и изход при аргументи {4, 3, 1, 5, 2} 5: 1 2 3 4 5

// Примерен вход и изход при аргументи {3, 56, -2, 2, 55 ,2} 6: -2 2 2 3 55 56
#include <iostream>
using namespace std;

void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
void sortArray(int *array, int size)
{

    if (size < 0)
        return;
    for (int i = 1; i < size; i++)
    {
        if (array[0] > array[i])
        {
            int number = array[0];
            array[0] = array[i];
            array[i] = number;
        }
    }

    return sortArray(array + 1, size - 1);
}
int main()
{
    int size;

    do
    {
        cout << "enter size ";
        cin >> size;
    } while (size < 0);

    int array[size];
    fillArray(array, size);
    sortArray(array, size);
    printArray(array, size);
}
