// Да се напише функция , която по даден масив от дробни числа ( и неговият размер ) 
// намира индекса на последния негов елемент , който е равен на средното аритметично от 
// неговите съседни елементи ( да се има превдивд, че крайните елементи нямат два съседа)
// Примерен вход и изход при аргументи {1 2 3 4 5 6 3} 7: Index 4

// Примерен вход и изход при аргументи {3 2 3} 3: No such index
#include <iostream>
using namespace std;

void fillArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}
void printArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}
int index(double *array, int size)
{ int number=0;
  for(int i=1;i<size-1;i++)
  {
      if(array[i]==(array[i-1]+array[i+1])/2)
     number=i;  
  }
  
  return number;
    
}
int main()
{
    int size;

    do
    {
        cout << "enter size ";
        cin >> size;
    } while (size < 0);

    double array[size];
    fillArray(array, size);
    
    if(index(array,size)>0)cout<<"inex="<<index(array,size);
    else cout<<"No such index";
}
