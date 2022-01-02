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