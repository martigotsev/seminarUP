#include <iostream>
using namespace std;
const int size = 32;
void smallLetter(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        if ((arr[i] >= 'A' && arr[i] <= 'Z'))
            arr[i] += 32;
}
int counter(char arr[])
{int counter=0;
    while (arr[counter] != '\0')
    {
        counter++;
    }
    return counter;
}
void esayName(char arr[], char arr2[], char arr3[])
{
    smallLetter(arr);
    smallLetter(arr2);
    int countArr = counter(arr);
    int countArr2 = counter(arr2);

    
        for (int i = 0; i < size*2; i++)
        {
            if(i<countArr)
            {for(int j=0;j<countArr;j++)
            arr3[i]=arr[j];
            }
            if(i==countArr)
            {
                arr3[i]='_';
            }
           // else 
           // for(int j=0;j<countArr2;j++)
            //{arr3[i]=arr2[j];}
            
        }
        
    
}
void prinArr(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        cout << arr[i];
}

int main()
{
    
    char arr[size];
    cin.getline(arr, size);
    char arr2[size];
    cin.getline(arr2, size);
    char arr3[size*2];
    esayName(arr,arr2,arr3);
    prinArr(arr3);
}