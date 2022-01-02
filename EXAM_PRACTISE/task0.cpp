#include <iostream>
using namespace std;
void printArr(int arr[],int size)
{
for(int i=0;i<size;i++)
{ 
    {cout<<"arr["<<i<<"] = ";
    cout<<arr[i]<<endl;}
}}
void fillArr(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
}
int maxElementInArr(int arr[],int n)
{   int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max){max=arr[i];}
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]==max)
        {
        {for(int j=i;j<n;j++)

            arr[j]=arr[j+1];
        }
        }
        arr[n]='\0';
        
    }
    return max;
}

int minElementInArr(int arr[],int n)
{   int min=arr[0];

    for(int i=0;i<n;i++)
    {
        if (arr[i]<min){min=arr[i];}
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]==min)
        {
        {for(int j=i;j<n;j++)

            arr[j]=arr[j+1];
            
        }
        }
        arr[n]='\0';
        
    }
    
    return min;
} 
void printFirstAndSecondMaxAndMinElements(int arr[],int n)
{
    
    cout<<"Max "<<maxElementInArr(arr, n)<<endl;
    n--;
    printArr(arr,n);
    cout<<"Min "<<minElementInArr(arr, n)<<endl;
    n--;
    printArr(arr,n);
    cout<<"Second Max "<<maxElementInArr(arr, n)<<endl;
    n--;
    printArr(arr,n);
    cout<<"Second Min "<<minElementInArr(arr, n)<<endl;
    n--;
    printArr(arr,n);
}
int main()
{
    int n;
    do 
    {
        cout<<"Enter n"<<endl;
        cout<<"n=";
        cin>>n;
    }while(n<4);
    int arr[n];
    fillArr(arr,n);

    printFirstAndSecondMaxAndMinElements(arr,n);
}