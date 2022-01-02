#include <iostream>
using namespace std;
int main()
{
    // int number, N , M , first , second , third;
    // cout<<"Enter a number in the range [100,999]:"<<endl;
    // cout<<"number";
    // cin>> number;
    // if(number<100||number>999)
    // {
    //     cout<<"This number is not in the range ";
    // return 0;
    //  }
    // first=number/100;
    // second=number/10%10;
    // third=number%10;
    // N= first + second;
    // M =first+third;
    // for(int i=0; i < N; i++ )
    // {
    // {
    // for(int j=0; j<M; j++)
    // {
    // if ( number % 5== 0){number-=first;cout<<number<<" ";
    // }
    // else if (number % 3 == 0)
    // {
    //     number-=second; cout<<number<<" ";
    // }
    // else
    // {
    //     number+=third; cout<<number<<" ";
    // }
    // }
    // }
    // cout<<endl;
    // }

    // task 4
    // Генерирайте редица от числа която започва с положителното число n и стига до
    // 1, като за всеки елемент на поредицата Xi се спазва правилото, че Xi = Xi-1 * 3 +
    // 1 ако Xi-1 е нечетно и Xi = Xi-1
    // / 2 ако Xi-1 е четно. Визуализирайте резултата с
    // хистограма като принтирате за всеки елемент на редицата ред със звезди Хi /
    // 10 + 1 броя и стойността на елемента.

    // int n;
    // cin>>n;
    // do
    // {
    //     if(n%10!=0)
    //     {
    // for(int i=0;i<= n/10  ; i++)
    // {
    //     cout<<"*";

    // }}
    // else    for(int i=0;i< n/10  ; i++)
    // {
    //     cout<<"*";

    // }
    // cout<<n<<endl;
    // if (n==1 )
    // {
    //     break;
    // }
    // if (n%2==0)
    // {

    //     n/=2;
    // }
    // else
    // {
    //    n=n*3+1 ;

    // }

    // }
    // while (n!=0);

    // task 2
    // int number, first , second , third,fourth;
    // cout<<"Enter a number in the range [1,1000]:"<<endl;
    // cout<<"number=";
    // cin>> number;
    // if(number<1||number>1000)
    // {
    //     cout<<"This number is not in the range ";

    //  }
    // else{
    // first=number/1000;
    // second=number/100%10;
    // third=number/10%10;
    // fourth=number%10;
    // switch(first)
    // {
    //     case 10: cout<<"M"; break;
    // }
    //     switch(second)
    // {   case 1: cout<<"C"; break;
    //     case 2: cout<<"CC"; break;
    //     case 3: cout<<"CCC"; break;
    //     case 4: cout<<"CD"; break;
    //     case 5: cout<<"D"; break;
    //     case 6: cout<<"DC"; break;
    //     case 7: cout<<"DCC"; break;
    //     case 8: cout<<"DCCC"; break;
    //     case 9: cout<<"CM"; break;
    //     case 10: cout<<"M"; break;
    // }
    // switch(third)
    // {

    //     case 1: cout<<"X"; break;
    //     case 2: cout<<"XX"; break;
    //     case 3: cout<<"XXX"; break;
    //     case 4: cout<<"XL"; break;
    //     case 5: cout<<"L"; break;
    //     case 6: cout<<"LX"; break;
    //     case 7: cout<<"LXX"; break;
    //     case 8: cout<<"LXXX"; break;
    //     case 9: cout<<"XC"; break;
    // }
    // switch(fourth)
    // {

    //     case 1: cout<<"I"; break;
    //     case 2: cout<<"II"; break;
    //     case 3: cout<<"III"; break;
    //     case 4: cout<<"IV"; break;
    //     case 5: cout<<"V"; break;
    //     case 6: cout<<"VI"; break;
    //     case 7: cout<<"VII"; break;
    //     case 8: cout<<"VIII"; break;
    //     case 9: cout<<"IX"; break;
    // }
    // }
    //първа задача
    int octave, note, octave1, note1, distanceToNote;
    cout << "Enter note with number(1 for C; 2 for D; 3 for E; 4 for F; 5 for G; 6 for A ; 7 for B)";
    cout << endl;
    cout << "Enter note:" << endl;
    cin >> note;
    if (note < 1 || note > 7)
    {
        cout << "Number of note is wrong";
        return 0;
    }
    cout << "Enter oktave 0-8:" << endl;
    cin >> octave;
    if ((octave == 8 && note > 1) || (octave == 0 && note < 6))
    {
        cout << "Wrong note in this octave!";
        return 0;
    }
    cout << "Enter note:" << endl;
    cin >> note1;
    if (note1 < 1 || note1 > 7)
    {
        cout << "Number of note is wrong";
        return 0;
    }
    cout << "Enter oktave 0-8:" << endl;
    cin >> octave1;
    if ((octave1 == 8 && note1 > 1) || (octave1 == 0 && note1 < 6))
    {
        cout << "Wrong note in this octave!";
        return 0;
    }
    if ((octave >= octave1 && note >= note1) || (octave <= octave1 && note <= note1))
    {
        distanceToNote = abs(note - note1);
    }
    else if (note > note1)
    {
        distanceToNote = 7 - note + note1;
    }
    else
    {
        distanceToNote = 7 - note1 + note;
    }
    cout << distanceToNote << endl;
    switch (distanceToNote)
    {

    case 0:
    case 3:
    case 5:
    case 7:
        cout << "The interval sounds normal";
        break;
    case 2:
        cout << "The interval sounds melodious";
        break;
    case 4:
        cout << "The interval hollow";
        break;
    case 1:
    case 6:
        cout << "The interval sounds fake";
        break;
    default:
        break;
    }
    return 0;
}