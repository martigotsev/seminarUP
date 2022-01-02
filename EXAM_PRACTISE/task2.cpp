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

bool twoConsecutiveElementsWithEqualValues(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       if (arr[i]==arr[i+1]) return 1;
   } 
    return 0;
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
    cout<<"There are two consecutive elements with the same values:"<<endl;
    cout<<boolalpha<<twoConsecutiveElementsWithEqualValues(arr,n);
}