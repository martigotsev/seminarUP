/*Да се напише функция , която , по даден масив от цели числа ( и неговият размер ) и
цяло число n, премахва от масива всички срещания на даденото число.
Примерен вход и изход при аргументи {1 2 2 3 7} 5 2 : {1 3 7}
*/
#include <iostream>
using namespace std;

void fillArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}
void printArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
void deliteElementInArray(double *array, int size, int n, int &newSize)
{
    int counter2 = 1;
    if (size < 0)
        return;
    if (array[0] == n)
    {
        int counter = 0;
        while (counter != size)
        {
            array[counter] = array[counter + 1];
            counter++;
        }
        array[counter] = '\0';
        counter2 = 0;
        newSize--;
    }

    return deliteElementInArray(array + counter2, size - 1, n, newSize);
}
int main()
{
    int size;

    do
    {
        cout << "enter size ";
        cin >> size;
    } while (size < 0);

    double array[size];
    fillArray(array, size);
    int n;
    cout << "n=";
    cin >> n;
    int newSize = size;
    deliteElementInArray(array, size, n, newSize);
    size = newSize;
    printArray(array, size);
}
