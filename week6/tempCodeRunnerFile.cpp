#include <iostream>
using namespace std;
// Трайчо иска да си купи кола, но има някои изисквания.
// Той е склонен да я вземе нова или втора ръка.

// Ако е втора ръка, иска, ако има климатик да е на по-малко от 115 000 км.,
// да е поне 70 конски сили и да струва най-много 6 000 лева, а ако няма климатик
// да е на по-малко от 180 000 км., да е поне 60 конски сили и да струва най-много 2 000 лева.

// Ако е нова иска да е от 70 до 90 конски сили включително и да струва не повече от 25 000 лева.

// Напишете булев израз, който по дадена информация за това дали колата е стара или нова,
// има ли климатик, мощността, пробегът и цената й, пресмята дали Трайчо е склонен да си купи колата.
int main()
{
    bool isairConditioning;
    bool isNewCar;
    double mileage;
    int horsePower;
    int price;
    cin >> isNewCar >> isairConditioning >> mileage >> horsePower >> price;
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
