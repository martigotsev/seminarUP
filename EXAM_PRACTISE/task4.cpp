#include <iostream>
using namespace std;
int counter(char arr[])
{
    int counter = 0;
    while (arr[counter] != '\0')
    {
        counter++;
    }
    return counter;
}
void howManyletter(char arr[])
{
    int counter1 = counter(arr);
    //cout << counter1;
    for (int i = 0; i < counter1; i++)
    {
        int count = 0;int p=0;
        for (int k = i+1 ; k < counter1; k++)
        {
            if (arr[i] == arr[k])
                p=1;
        }
            {   if (p==0)
            {
                for (int j = 0; j < counter1; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        count++;
                    }
                }
                cout << arr[i] << " " << count << endl;
            }   
            }
    }
}
    int main()
    {
        const int size = 225;
        char array[size];
        cin.getline(array, size);

        //cout<<counter(array);
        howManyletter(array);
    }