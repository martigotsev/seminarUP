#include <iostream>
using namespace std;
double income(int numberOfPeople, double priceTicket)
{
    if (numberOfPeople >= 5 && numberOfPeople <= 10)
    {
        priceTicket *= 0.95;
    }
    else if (numberOfPeople > 11 && numberOfPeople <= 20)
    {
        priceTicket *= 0.9;
    }
    else if (priceTicket < 20)
        priceTicket *= 0.85;
    return priceTicket * numberOfPeople;
}
int main()
{
    double priceTicket;
    int numberOfPeople;
    cin >> numberOfPeople >> priceTicket;
    cout << income(numberOfPeople, priceTicket);
}