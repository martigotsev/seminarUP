#include <iostream>
using namespace std;
int enterIntegerNumber()
{
    int number;
    cout << "Enter integer number:" << endl;
    cin >> number;
    return number;
}
int enterDigit()
{
    int digit;

    cout << "Enter digit:" << endl;
    cin >> digit;

    return digit;
}
int numberDigit(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
            count++;
        number /= 10;
    }
    cout << "Count of " << digit << " is : ";
    return count;
}
int main()
{
    int number = enterIntegerNumber();
    int digit;
    do
    {
        digit = enterDigit();
    } while (digit < 0 || digit > 9);

    cout << numberDigit(number, digit);
}