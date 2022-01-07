#include <iostream>
using namespace std;
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
}

void swap(int &firstelement, int &secondelement)
{
    int temp;
    temp = firstelement;
    firstelement = secondelement;
    secondelement = temp;
}

void printString(char string[])
{
    for(int i=0;string[i]!='\0';i++)
    {
        cout<<string[i];
    }
}
int reversArray(int *array,int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(array[i],array[size-i-1]);
    }
}

int countnumber(int number)
{
    int count=0;
    while(number!=0)
    {
        count++;
        number/=10;
    }
    return count;
    
}
int pow(int number,int pow)
{
    for(int i;i<pow;i++)
    {
        number*=number;
    }
    return number;
}

int *numberToArray(int number)
{
    int *array=new int[countnumber(number)];
    for(int i=0;number!=0;i++)
    {
        array[i]=number%10;
        number/=10;
    }
    return array;
}

void arrayToString(char *string,int &count,int *array,int size)
{
   
    for(int i=0;i<size-1;i++)
    { 
       
        if((array[i]*10+array[i+1])<=26)
        {
        string[count]='a'+(array[i]*10+array[i+1]-1);
        count++;
        i++;
        }else
        {
        string[count]='a'+(array[i]-1);
        count++;
        i++;
        
        string[count]='a'+(array[i+1]-1);
        count++;
        ;
        }


    }
    if(array[size-1]<10)
    {
        string[count]='a'+(array[size-1]-1);
        count++;
    }
}
int main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    char string[256];
    int count=0;
    int size=countnumber(number);
    // cout<<size;
    int *array=numberToArray(number);
    reversArray(array,size);
    // printArray(array,size);
    arrayToString(string,count,array,countnumber(number));
    string[count-1]='\0';
    printString(string);
}