#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number" << endl;
    cin >> number;
    while (number != 0)
    {
        if (number % 10 == 1)
        {
            cout << "Yes";
            return 0;
        }
        number /= 10;
    }
    cout << "No";
}