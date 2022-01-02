#include <iostream>
using namespace std;
void fillArr(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
}
void fillArr1(int arr[],int n)
{   int i=1;
    for(int j=0; j<n;j++,i++)
    {
        arr[j]=arr[i];
    }

}
void printArr(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cout<<arr[i]<<endl;
    }
}





int main()
{
    int n;
    do 
    {
        cout<<"Enter n"<<endl;
        cout<<"n=";
        cin>>n;
    }while(n<1|| n> 100);
    int arr[n];
    fillArr(arr,n);
    n=n-2;
    fillArr1(arr,n);
    cout<<endl;
    printArr(arr,n);
}