// Дадени са естествените числа n и k.
// Да се дефинира рекурсивна функция, която
//  намира произведението на естествените числа от 1 до n със стъпка k.
#include <iostream>
using namespace std;
int multiply(int n, int k)
{
    if (n <= 2 * k)
        return 1;
    int number = 0;
    number = n % k;
    return (n - n % k) * multiply(n - number - k, k);
}
bool isSameString(char *firstString, char *secondString)
{
    if (*firstString == 0 && *secondString == 0)
    {
        return 1;
    }
    if (*firstString != *secondString)
        return 0;
    return isSameString(firstString + 1, secondString + 1);
}
void findFirstWord(char *string, char *firstString, int &size)
{
    if (*string == ' ')
    {
        *firstString = '\0';
        return;
    }
    *firstString = *string;
    size++;
    return findFirstWord(string + 1, firstString + 1, size);
}
int count(char *string)
{
    if (*string == 0)
        return 0;
    return 1 + count(string + 1);
}
const int s = 100;
void findWords(const char *string, char minWord[s], char maxWord[s])
{
    if (*string == 0)
    {
        cout << "*";
        return;
    }
    char word[100];
    int sizeNextWord = 0;
    while (*string != ' ' && *string != 0)
    {
        word[sizeNextWord] = *string;
        sizeNextWord++;
        string++;
    }
    word[sizeNextWord] = '\0';
    if (sizeNextWord <= count(minWord))
        for (size_t i = 0; i < sizeNextWord + 1; i++)
        {
            minWord[i] = word[i];
        }
    if (sizeNextWord >= count(maxWord))
        for (size_t i = 0; i < sizeNextWord + 1; i++)
        {
            maxWord[i] = word[i];
        }
    if (*string == 0)
    {
        cout << minWord << endl;
        cout << maxWord;
        cout << "*";
        return;
    }

    return findWords(string + 1, minWord, maxWord);
}
void helpTruncate(char *src, int n)
{
    if (n == 0)
    {
        *src = '\0';
        return;
    }
    return helpTruncate(src + 1, n - 1);
}
void truncate(char *src, int n)
{

    if (count(src) <= n)
        return;
    helpTruncate(src, n);
}
void stringWithNewSize(char *&string, int newSize)
{
    char *newpoint = new char[newSize + 1];
    for (int i = 0; i < newSize; i++)
    {
        newpoint[i] = string[i];
    }
    newpoint[newSize] = '\0';
    string = new char[newSize + 1];
    for (int i = 0; i < newSize + 1; i++)
    {
        string[i] = newpoint[i];
    }
    delete[] newpoint;
}
char *copyString(char *string)
{
    int newSize = count(string);
    char *newpoint = new char[newSize];
    for (int i = 0; i <= newSize; i++)
    {
        newpoint[i] = string[i];
    }
    delete[] string;
    return newpoint;
}
char *coneverToString(int number)
{
    char *string = new char[100];
    int i = 0;
    while (number != 0)
    {
        int lastSymbol = number % 10;
        string[i] = lastSymbol + 'a' - 'b' + 'a';

        number /= 10;
        i++;
    }
    string[i] = '\0';
    return string;
}

int main()
{
    // int k=2,n=11;
    // cout<<multiply(n,k);

    // char firstString[100];
    // cin.getline(firstString,100);
    // char secondString[100];
    // cin.getline(secondString,100);
    // cout<<boolalpha<<isSameString(firstString,secondString);

    // char string[100];
    // cin.getline(string, 100);
    // char secondString[100];
    // int size = 0;
    // findFirstWord(string, secondString, size);
    // // cout<<size;
    // // cout<<secondString<<endl;
    // char min[100];
    // for (size_t i = 0; i <= size; i++)
    // {
    //     min[i] = secondString[i];
    // }
    // char max[100];
    // for (size_t i = 0; i <= size; i++)
    // {
    //     max[i] = secondString[i];
    // }
    // cout << max;
    // findWords(string + size + 1, min, max);

    // char string[100];
    // cin.getline(string, 100);
    // int n = 7;
    // truncate(string, n);
    // cout << string;

    // char *string=new char[100];
    // cin.getline(string, 100);
    // int newSize=8;
    // stringWithNewSize(string,newSize);
    // cout<<string;
    // delete[] string;

    //Напишете функция, която приема масив и връща друг масив, който е копие на подадения.
    // char *string=new char[100];
    // cin.getline(string, 100);
    // char*copySString=copyString(string);
    // cout<<copySString;
    // delete[] copySString;

    int number = 987654321;
    cout << coneverToString(number);
}