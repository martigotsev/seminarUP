#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cout<<" ";
    }
     for(int i=0;i<n;i++)
    {
        cout<<"**";
    }
    cout<<endl;
    int n1=n;
    while(n1!=2)
    {
        
    for(int i=n1-2;i>0;i--)
    {
        cout<<" ";
    }
    cout<<"*";
    for(int i=n;i>n1;i--)
    {
        cout<<" ";
    }
    cout<<"*";
    for(int i=1;i<n;i++)
    {
        cout<<" ";
    }
    cout<<"*";
    for (int i=0; i < n1-3; i++)
    {
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    n1--;
    }
         for(int i=0;i<n;i++)
    {
        cout<<"**";
    }

}