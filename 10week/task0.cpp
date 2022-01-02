#include <iostream>
using namespace std;
void swapTwoNumber(int &firstNumber, int &secondNumber)
{
    int swap = firstNumber;
    firstNumber = secondNumber;
    secondNumber = swap;
}
void newFirstnumber(int &firstNumber, int secondNumber)
{
    while (firstNumber < 2 * secondNumber)
    {
        firstNumber++;
    }
}
int main()
{
    // int firstNumber,secondNumber;
    // cin>>firstNumber;
    // cin>>secondNumber;
    // swapTwoNumber(firstNumber,secondNumber);
    // cout<<firstNumber<<" "<<secondNumber;
    int m, n;
    cout << "m";
    cin >> m;
    do
    {
        cout << "n";
        cin >> n;

    } while (n < m);
    newFirstnumber(m, n);
    cout << m;
}