#include <iostream>
using namespace std;
void fillArr(int arr[],int N)
{
    for(int i=0;i<N ; i++)
    cin>>arr[i];
}
void printArr(int arr[],int N)
{
    for(int i=0;i<N ; i++)
    cout<<arr[i]<<"  ";
}
bool isInterestingNumber(int number)
{
while(number!=0)
{ int lastnumer=number%10;
int numbercopy=number/10;
    while(numbercopy!=0)
    {
        if(lastnumer<numbercopy%10) return false;
        numbercopy/=10;

    }
    number/=10;
}
return true;
}
void printIsInterestingNumber(int arr[],int size)
{
    for(int i=0;i<size ; i++)
    {if(isInterestingNumber(arr[i])){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
}}
int main()
{
    int N;
    do{
    cout<<"N=";
    cin>>N;
    }while(N<=0);

int arr[N];
fillArr(arr,N);
printIsInterestingNumber(arr,N);
}