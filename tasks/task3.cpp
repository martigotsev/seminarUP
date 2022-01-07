#include <iostream>
using namespace std;
const int size=150;
void printArray(char *string)
{
    for (int i=0;string[i]!=0;i++)
    {
        cout<<string[i];
    }
    cout<<endl;
}
void swap(char *string)
{   
    int counter=0,p,c;
    for(int i=0;string[i]!=0&&counter<3;i++)
    {
        if(string[i]==' '){counter++; p=i;}
        if(counter==1)c++;
    }
    if (counter<2) return ;
    int o=p;
    for(int i=0;i<c+1;i++)
    {
        //1 22 333 444 555 444 888
            int symbol=string[o];
            for(int z=p;z>=1;z--)
            {string[z]=string[z-1];}
            string[0]=symbol;
    }
}
int main()
{
    char string[size];
    cin.getline(string,size);
    printArray(string);
    swap(string);
    cout<<endl;
    printArray(string);
}