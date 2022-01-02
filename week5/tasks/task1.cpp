#include <iostream>
using namespace std;
int enterIntegerNumber()
{
    int number;
    cout << "Enter integer number:" << endl;
    cin >> number;
    return number;
}
double enterRealNumber()
{
    double number;
    cout << "Enter real number:" << endl;
    cin >> number;
    return number;
}
char enterSymbol()
{
    char symbol;
    cout << "Enter symbol:" << endl;
    cin >> symbol;
    return symbol;
}
int abs(int number) // намира абсолютната стойност на цяло число.
{
    cout << "ABS number is ";
    if (number < 0)
        number = -number;
    return number;
}
double pow(double number, double number1)
{
    cout << "Pow " << number << " and " << number1 << " is ";
    double number2 = number;
    for (int i = 1; i < number1; i++)
    {
        number *= number2;
    }
    return number;
}
double min(double number1, double number2) // - за дадени две числа, връща по-малкото
{
    cout << "Min of " << number1 << " and " << number2 << " is ";
    if (number1 > number2)
    {
        return number2;
    }
    else
        return number1;
}
double max(double number1, double number2) //- за дадени две числа, връща по-голямото
{
    cout << "Max of " << number1 << " and " << number2 << " is ";
    if (number1 > number2)
    {
        return number1;
    }
    else
        return number2;
}
double minOfThree(double number1, double number2, double number3)
{
    cout << "Min of " << number1 << " , " << number2 << " and " << number3 << " is ";
    int min;
    min = number1;
    if (min > number2)
    {
        min = number2;
    }
    if (min > number3)
    {
        min = number3;
    }
    return min;
}
double maxOfThree(double number1, double number2, double number3)
{
    cout << "Max of " << number1 << " , " << number2 << " and " << number3 << " is ";
    int max;
    max = number1;
    if (max < number2)
    {
        max = number2;
    }
    if (max < number3)
    {
        max = number3;
    }
    return max;
}
bool isUpper(char symbol)
{
    cout << "This '" << symbol << "' is upper letter: ";
    return (symbol >= 'A' && symbol <= 'Z');
}
bool isLower(char symbol)
{
    cout << "This '" << symbol << "' is lower letter: ";
    return (symbol >= 'a' && symbol <= 'z');
}
bool isLetter(char symbol)
{
    cout << "This '" << symbol << "' is letter: ";
    return ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'));
}
bool isDigit(char symbol)
{
    cout << "This '" << symbol << "' is digit: ";

    return (symbol >= '1' && symbol <= '9');
}
int main()
{
    int integerNumber;
    integerNumber = enterIntegerNumber();
    cout << abs(integerNumber) << endl;
    double realNumber;
    realNumber = enterRealNumber();
    cout << pow(realNumber, integerNumber) << endl;
    cout << min(enterRealNumber(), enterRealNumber()) << endl;
    cout << max(enterRealNumber(), enterRealNumber()) << endl;
    cout << minOfThree(enterRealNumber(), enterRealNumber(), enterRealNumber()) << endl;
    cout << maxOfThree(enterRealNumber(), enterRealNumber(), enterRealNumber()) << endl;
    cout << boolalpha << isUpper(enterSymbol()) << endl;
    cout << boolalpha << isLower(enterSymbol()) << endl;
    cout << boolalpha << isLetter(enterSymbol()) << endl;
    cout << boolalpha << isDigit(enterSymbol()) << endl;
}