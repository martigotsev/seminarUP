#include <iostream>
using namespace std;
int sumOfDigits(int number)
{
    if (number < 10)
        return number;
    return number % 10 + sumOfDigits(number / 10);
}
int recStrlen(const char *string)
{
    if (*string == 0)
        return 0;
    return 1 + recStrlen(string + 1);
}

int reverse(int number, int newNumber)
{
    if (number == 0)
        return newNumber;
    return reverse(number / 10, (newNumber * 10 + (number % 10)));
}
int factorial(int number)
{
    if (number == 1)
        return 1;
    return number * factorial(number - 1);
}
bool areEqual(const char *str1,const char *str2)
{
    if (*str1 == 0 && *str2 == 0)
        return true;
    if (*str1 != *str2)
        return false;

    return areEqual((str1 + 1), str2 + 1);
}
int fib(int number)
{
    if (number == 1 || number == 0)
        return number;
    return fib(number - 1) + fib(number - 2);
}
double min(double *array, int size, int lastMin)
{
    if (size == 0)
        return lastMin;
    if (*array < lastMin)
        lastMin = *array;
    return min(array + 1, size - 1, lastMin);
}
int pow(int counter)
{
    int number = 1;
    while (counter != 0)
    {
        number *= 10;
        counter--;
    }
    return number;
}
int binaryNumber(int number)
{
    if(number==0||number==1)
    return number;
    return number%2+binaryNumber(number/2)*10;

}

void evaluate(const char *string, int number, int smallLetter, int bigLetter)
{
    if (*string == 0)
    {
        cout << "number" << number << endl;
        cout << "small letter" << smallLetter << endl;
        cout << "big letter" << bigLetter << endl;
        return;
    }
    if (*string >= '0' && *string <= '9')
      return evaluate(string + 1, number+1, smallLetter, bigLetter);
    if (*string >= 'a' && *string <= 'z')
     return evaluate(string + 1, number, smallLetter+1, bigLetter);
    if (*string >= 'A' && *string <= 'Z')
     return evaluate(string + 1, number, smallLetter, bigLetter+1);
    return evaluate(string + 1, number, smallLetter, bigLetter);
}
void swapcase(char*string)
{
    if(*string==0)
    return;
    if(*string>='a'&&*string<='z')
    {*string=*string-('a'-'A');
    return swapcase(string+1);}
    if(*string>='A'&&*string<='Z')
    *string=*string+('a'-'A');
    return swapcase(string+1);
}
int main()
{
    // //task 0
    // cout<<sumOfDigits(125);
    // // task 1
    // // cout << recStrlen("Hello world");
    // //task 2
    // cout << reverse(1127835,0);
    // //task 3
    // cout<<factorial(6);
    // task 4
    // cout << boolalpha << areEqual("", "") << endl;
    // cout << boolalpha << areEqual("", "Hi") << endl;
    // cout << boolalpha << areEqual("Hello", "Hello") << endl;
    // cout << boolalpha << areEqual("Hello", "Hi") << endl;
    // // task 5
    // for (int i = 0; i < 10; i++)
    //     cout << fib(i) << endl;
    // task 6
    // int size = 5;
    // double array[size] = {10.2, 3.5, 4.5, 1, 2};
    // cout << min(array + 1, size - 1, *array);
    // // task 7
    // cout<<binaryNumber(67);
    // // task 8

    // evaluate("3 Doors Down", 0,0,0);
    //task 9
    // char string[200];
    // cin.getline(string,200);
    // swapcase(string);
    // for (int i = 0;string[i]!=0; i++)
    // {
    //     cout<<string[i];
    // }
    

}