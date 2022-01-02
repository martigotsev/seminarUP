#include <iostream>
using namespace std;
const int size = 11;
void printArr(char arr[])
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
}
bool isValideDate(char arr[])
{
  int day = ((int)arr[0] - 48) * 10 + (int)arr[1] - 48;
  int month = ((int)arr[3] - 48) * 10 + (int)arr[4] - 48;
  if (month < 1 || month > 12)
    return false;
  if (day < 1 || day > 31)
    return false;
  if (arr[2] != '.' || arr[5] != '.')
    return false;
  switch (month)
  {
  case 4:
  case 6:
  case 9:
  case 11:
    if (day > 30)
      return false;
    break;
  case 2:
    if (day > 28)
      return false;
    break;
  }
  return true;
}
int main()
{
  char date[size];
  cin.getline(date, size);
  printArr(date);
  cout << '\n'
       << boolalpha << isValideDate(date);
}
