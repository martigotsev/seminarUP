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
bool isSubset(int arr[], int arr1[], int size, int size1)
{
    {
        for (int i = 0; i < size; i++)
        {
            int count = 0;
            bool flag = false;
            while (count != size1)
            {
                if (arr[i] == arr1[count])
                {
                    flag = true;
                    break;
                }
                count++;
            }
            if (flag == false)
                return 0;
        }
    }
    return 1;
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
    } while (size1 < size);

    int arr1[size1]; 

    fillArr(arr1, size1);
    cout << boolalpha << isSubset(arr, arr1, size, size1);
}