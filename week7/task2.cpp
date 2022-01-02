#include <iostream>
using namespace std;

void hackerlanguage(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z'))
            arr[i] -= 32;
        if (arr[i] == 'A')
            arr[i] = '4';
        if (arr[i] == 'E')
            arr[i] = '3';
        if (arr[i] == 'I')
            arr[i] = '1';
        if (arr[i] == 'O')
            arr[i] = '0';
        if (arr[i] == ' ')
            arr[i] = '_';
    }
}
void prinArr(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        cout << arr[i];
}

int main()
{
    const int size = 32;
    char arr[size];
    cin.getline(arr, size);
    hackerlanguage(arr);
    prinArr(arr);
}