#include <iostream>
using namespace std;
int main()
{
    // task 1 Factoriel
/*     int num,factoriel=1;
    cout << "Enter number : " ;
    cin>>num;
    for (int i = 1 ; i <= num ; i++)
    {
        factoriel*=i;
    }
    cout<<"The factoriel of your number is "<<factoriel<<endl;
 */
   /*   //Task 2 - Sum to zero
    int n , number , sum=0; 
    bool flag=false;
    cout<<"Enter n ";
    cin>>n;
    for (int i = 0; i<n ; i++)
    {
        cin>>number;
        if (number == 0)
		{
			
			flag = true; // вдигаме флага, така ще прекратим цикъла
		}
	

	if (flag == false) 
		   {   
        sum+=number;
       
    }}
    cout<<"Sum of numbers to ziro is "<<sum;
  */
    // Task 3 Sum of digits
    /* int number, sum=0;
    cout<<"Number = ";
    cin>> number;
    while (number!=0)
    {
        sum+= number%10;
        number/=10;
    } 
    cout<<"Sum of digits is "<<sum;
 */
    // task 4 prime
   /*  int number;
    cout<<" Enter number "<<endl;
    cin >> number;
    for(int i = 2 ; i <= number/2; i++)
    {
        if (number% i==0)
        {cout<<"Your number is not prime ";break;}
         else cout<<"Your number is prime";
    }  */
     // task 5 fibunachi
    //  int number, number1=1,number2=0,number3=0;
    //  cout<<" Enter number "<<endl;
    // cin >> number;
    // for(int i = 0 ; i < number; i++)
    // { number3=number1 + number2;
    // number1=number2;
    // number2=number3;
    
    // } cout <<number3;
    // task 6
    // int n ;
    // cout<<"n = ";
    // cin>>n;
    // for(int i = 0; i<n ; i++)
    // {
    //     for(int j=1; j<=n ;j++)
    //     {
    //         if(i<j)
    //         {
    //             cout<<" + ";
    //         }
    //         else
    //         { 
    //             cout<<" - ";
    //         }
    //     }
    //         cout<<endl;
    // }
 


    return 0;
}