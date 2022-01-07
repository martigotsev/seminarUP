#include <iostream>
#include <string.h>
using namespace std;
void fillArray(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }
}
void printArray(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void pushBack(int *&array, int &count)
{
    int number;
    cout << "enter number" << endl;
    cin >> number;
    count++;
    int *newArray = new int[count];
    for (int i = 0; i < count - 1; i++)
    {
        newArray[i] = array[i];
    }
    newArray[count - 1] = number;
    array = new int[count];
    for (int i = 0; i < count; i++)
    {
        array[i] = newArray[i];
    }
    delete[] newArray;
}
void pushFront(int *&array, int &count)
{
    int number;
    cout << "enter number" << endl;
    cin >> number;
    count++;
    int *newArray = new int[count];
    for (int i = 1; i < count; i++)
    {
        newArray[i] = array[i - 1];
    }
    newArray[0] = number;
    array = new int[count];
    for (int i = 0; i < count; i++)
    {
        array[i] = newArray[i];
    }
    delete[] newArray;
}
void copy(int *&array, int &count)
{
    cin >> count;
    int *secondArray = new int[count];
    fillArray(secondArray, count);
    array = new int[count];

    for (int i = 0; i < count; i++)
    {
        array[i] = secondArray[i];
    }
    delete[] secondArray;
}
void pop_back(int *&array, int &size)
{
    size--;
    int *arrCopy = new int[size - 1];
    for (int i = 0; i < size; i++)
    {
        arrCopy[i] = array[i];
    }
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = arrCopy[i];
    }
    delete[] arrCopy;
}
void pop_front(int *&array, int &size)
{
    int *arrCopy = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        arrCopy[i] = array[i + 1];
    }
    size--;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = arrCopy[i];
    }
    delete[] arrCopy;
}
int main()
{
    int count;
    do
    {
        cout << "enter number beteween [1- 100]";
        cin >> count;
    } while (count < 1);

    int *array = new int[count];
    int number;
    fillArray(array, count);
    do
    {
        cout << "enter number 0 print and end the program" << endl;
        cout << "enter number 1 - push back" << endl;
        cout << "enter number 2 - push front" << endl;
        cout << "enter number 3 - copy" << endl;
        cout << "enter number 4 - pop_back" << endl;
        cout << "enter number 5 - pop_front" << endl;
        cout << "number=";
        cin >> number;

    } while (number < 0 || number > 5);
    switch (number)
    {
    case 0:
    {
        cout << "print and end the program" << endl;
        printArray(array, count);
    }
    break;
    case 1:
    {
        cout << "push back" << endl;
        pushBack(array, count);
        printArray(array, count);
    }
    break;
    case 2:
    {
        cout << "push front" << endl;
        pushFront(array, count);
        printArray(array, count);
    }
    break;
    case 3:
    {
        cout << "copy" << endl;
        copy(array, count);
        printArray(array, count);
    }
    break;
    case 4:
    {
        cout << "pop_back" << endl;

        pop_back(array, count);
        printArray(array, count);
    }
    break;
    case 5:
    {
        cout << "pop_front" << endl;
        pop_front(array, count);
        printArray(array, count);
    }
    break;
    }
    delete[] array;
    return 0;
}