#include <iostream>
using namespace std;
void row(int N)
{
    int count = 0;
    for (int j = 1; j <= N; j++)
    {
        for (int i = 1; i < j + 1; i++)
        {
            cout << j << " ";
            count++;
            if (count == N)
                return;
        }
    }
}
int main()
{
    int N;
    cout << "N=";
    cin >> N;
    row(N);
}