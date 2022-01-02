#include <iostream>
using namespace std;
int enterIntegerNumber()
{
    int number;
    cout << "Enter integer number:" << endl;
    cin >> number;
    return number;
}
bool isPrimeNumber(int number)
{
    for(int i=2;i < number/2; i++)
    {
        if (number%i==0)  return 0;

    }
  return 1;
}
bool PairedPrimeNumbers(int firstNumber,int secondNumber)
{
    if (isPrimeNumber(firstNumber)&&isPrimeNumber(secondNumber))
    {return (firstNumber+2==secondNumber||secondNumber+2==firstNumber);}
    else return 0;

}
int main()
{
    cout <<boolalpha<< PairedPrimeNumbers(enterIntegerNumber(), enterIntegerNumber());
}