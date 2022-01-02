#include <iostream>
using namespace std;

void selectNumber(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        if (arr[i] <= '9' && arr[i] >= '0')
            cout << arr[i];
}
void hackerlanguage(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        if ((arr[i] <= 'Z' && arr[i] >= 'A') || (arr[i] >= 'a' && arr[i] <= 'z'))
            cout << arr[i];
}

void selectSymbol(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        
        
            if (arr[i] ==','||arr[i] =='.'||arr[i] =='!'||arr[i] =='?'||arr[i] =='('||arr[i] ==')'||arr[i] =='['||arr[i] ==']'||arr[i] =='{'||arr[i] =='}'||arr[i] =='+'||arr[i] =='-')
            {
                cout << arr[i];
            }
        
    }
}
int main()
{

    int number;
    cout << "Enter 1 for select letter 2 - number 3- "
         << "\n(. , ! ? () [] {} + -) " << endl;
    cin >> number;
    while (number > 3 || number < 1)
    {
        cout << "Please enter a valid number" << endl;
        cin >> number;
    }
    const int size = 32;

    char arr[size];
    cin.get();
    cin.getline(arr, size);
    if(number==1)hackerlanguage(arr);
    else if (number=2)selectNumber(arr);
    else selectSymbol(arr);
}