// Да се напише функция , която след приемане на аргументи два символни низа, залепва втория низ за първия.
//(Да се напише отделна функция, която намира дължините им).
// Примерен вход и изход при аргументи ala bala : alabala (След пускане на функцията ако принтираме първия низ трябва да изведе alabala)
#include <iostream>
#include <string.h>
using namespace std;
const int size = 1000000;

char printString(char *string)
{
    if (string[0] != 0)
    {
        cout << string[0];
        return printString(string + 1);
    }
}
void strcat(char *firstString, char *secondString)
{
    int number = strlen(firstString) - 1;
    for (int i =0; secondString[i] != 0; i++)
    {
        firstString[number + i+1] = secondString[i];
    }
}
int main()
{   
    char firstString[size];
    cin.getline(firstString, size);
    char secondString[size];
    cin.getline(secondString, size);
    strcat(firstString, secondString);
    printString(firstString);
}