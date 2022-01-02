#include <iostream>
using namespace std;
void fillArr(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cin >> arr[i];
}
void printArr(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << "  ";
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j + 1], array[j]);
        }
    }
}
void obedinenie(int arr[], int size, int arr1[], int size1, int *arr2, int &size2)
{
    size2 = size1 + size;
    int counter1 = 0;
    int counter2 = 0;
    for (int i = 0; i < size2; i++)
    {
        int number1 = arr[counter1];
        int number2 = arr1[counter2];
        if (number1 < number2)
        {
            *(arr2 + i) = number1;
            counter1++;
        }
        else
        {
            *(arr2 + i) = number2;
            counter2++;
        }
        
    };
}

int main()
{
    int size;
    do
    {
        cout << "size=";
        cin >> size;
    } while (size <= 0);
    int arr[size];
    fillArr(arr, size);
    int size1;
    do
    {
        cout << "size1=";
        cin >> size1;
    } while (size1 <= 0);

    int arr1[size1];

    fillArr(arr1, size1);
    sortArray(arr, size);
    sortArray(arr1, size1);
    cout << endl;
    printArr(arr, size);
    cout << endl;
    printArr(arr1, size1);
    int size2 = 0;
    int arr2[size2];
    obedinenie(arr, size, arr1, size1, arr2, size2);
    cout << endl;
    printArr(arr2, size2);
}