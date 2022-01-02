#include <iostream>
using namespace std;
bool isValidT1ime(int time)
{
    int hours = time / 100;
    int minutes = time % 100;
    return ((hours >= 0 && hours < 24) && (minutes < 60 && minutes >= 0));
    return 1;
}
int difrentsTime(int time1, int time2)
{
    int hours1 = time1 / 100;
    int minutes1 = time1 % 100;
    int hours2 = time2 / 100;
    int minutes2 = time2 % 100;
    int minutes, hours;
    if (minutes1 >= minutes2)
        minutes = minutes1 - minutes2;
    else
    {
        minutes = minutes1 + 60 - minutes2;
        hours1--;
    }
    if (hours1 >= hours2)
    {
        hours = hours1 - hours2;
    }
    else
    {
        hours = hours1 + 24 - hours2;
    }
    return hours * 100 + minutes;
}
int main()
{
    int time1, time2;
    do
    {
        cout << "Enter time with number [1000-9999]:";
        cin >> time1;
    } while (time1 < 1000 || time1 > 9999);
    do
    {
        cout << "Enter time with number [1000-9999]:";
        cin >> time2;
    } while (time2 < 1000 || time2 > 9999);
    if (isValidT1ime(time1) && isValidT1ime(time2))
        cout << difrentsTime(time1, time2);
    else
        cout << "Is not valide time";
}