#include <iostream>
using namespace std;
int main()
{
    int n;
    
    do
    {
       cin>>n; 
    } while (n<3||n>25);
    cout<<"*****";
    int m=n;
    for (int i = 0; i < ( n-2)*2; i++)
    {
        cout<<" ";
    }
    cout<<"*****"<<endl;

    for (int row = 0; row < n-2; row++)
    {
        cout<<" ";
            for (int rowcopy = 0; rowcopy < row; rowcopy++)
    {
        cout<<" ";
    }
      
    cout<<"*   *";
    m-=1;
            for (int rowcopy1 = (m-2)*2; rowcopy1 > 0; rowcopy1-=1)
    {
        cout<<" ";
    }
    
        
    cout<<"*   *";
    cout<<endl;
    
    }
    for(int i=0;i<n-1;i++)
    cout<<" ";
    cout<<"********";
    

   
    
    
    
// 
// int number, newnumber=0, newnumber1=0;
// cin>>number;
// while (number!=0)
// {
//     if(number%2==0)
//     {
//         newnumber+=(number%10);
//         newnumber*=10;
//     }
//     number/=10;
// }
// while (newnumber!=0)
// {
    
//     newnumber1+=(newnumber%10);
//       newnumber1*=10;  
    
//     newnumber/=10;
// }

// cout<<newnumber1/5<<endl;

}