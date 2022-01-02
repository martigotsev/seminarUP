#include <iostream>
#include <string.h>
using namespace std;
bool degreeTwo(int number)
{
    if (number < 1)
        return 0;
    if (number == 1)
        return 1;
    while (number != 1)
    {
        if (number % 2 == 1)
            return 0;
        number /= 2;
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter number:" << endl;
    cout << "number = ";
    cin >> number;
    cout << "degree of the number 2" << endl;
    cout << boolalpha << degreeTwo(number);
}
