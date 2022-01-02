#include <iostream>
using namespace std;
int main()
{
    bool isairConditioning;
    bool isNewCar;
    double mileage;
    double horsePower;
    double price;
    cout << "New car\n"
         << "Enter 1 for true else 0 for false\n";
    cin >> isNewCar;
    cout << "Air conditioning\n"
         << "Enter 1 for true else 0 for false\n";
    cin >> isairConditioning;
    do
    {
        cout << "Enter mileage:\n";
        cin >> mileage;
    } while (mileage < 0);

    do
    {
        cout << "Enter horse power:\n";
        cin >> horsePower;
    } while (horsePower < 0);
    do
    {
        cout << "Enter price" << endl;
        cin >> price;
    } while (price < 0);

    bool isBuyNewCar = (isNewCar) &&
                       (horsePower >= 70 && horsePower <= 90) &&
                       (price <= 25000);
    bool isBuySecondHandCarWhitAirConditioning = (isNewCar == false) &&
                                                 (isairConditioning) &&
                                                 (mileage < 115000) &&
                                                 (horsePower >= 70) &&
                                                 (price <= 6000);
    bool isBuySecondHandCarWhitoutAirConditioning = (isNewCar == false) &&
                                                    (isairConditioning = false) &&
                                                    (mileage < 180000) &&
                                                    (horsePower >= 60) &&
                                                    (price <= 2000);
    bool isBuyCar = (isBuyNewCar) ||
                    (isBuySecondHandCarWhitAirConditioning) ||
                    (isBuySecondHandCarWhitoutAirConditioning);
    cout << boolalpha << isBuyCar;
}
