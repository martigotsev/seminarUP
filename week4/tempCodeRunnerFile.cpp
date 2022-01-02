  // task 5 fibunachi
     int number, number1=1,number2=0,number3=0;
     cout<<" Enter number "<<endl;
    cin >> number;
    for(int i = 0 ; i < number; i++)
    { number3=number1+ number2;
    number1=number2;
    number2=number3;
    
    } cout <<number3;