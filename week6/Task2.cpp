#include <iostream>
using namespace std;
bool theSecondNumberHasADivisorDivisorOfTheFirstSquared(int firstNumber,int secondNumber)
{
    for (int i=2;i<firstNumber;i++)
    {  if((firstNumber%i==0)&&secondNumber%(i*i)==0){return 1;}
    }
    return 0;
}
int main()
{
    int firstNumber,secondNumber;
    cout<<"Enter first number"<<endl;
    cin>> firstNumber;
    cout<<"Enter second number"<<endl;
    cin>>secondNumber;
    cout<<boolalpha<<theSecondNumberHasADivisorDivisorOfTheFirstSquared(firstNumber,secondNumber);
}