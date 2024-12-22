// wap to display weather ->raining if day is monday else sunny if day is tuesday likewise you can add more statements
#include <iostream>
#include <string>
using namespace std;

// note:- in cpp switch cases don`t work with strings ,enums can be used
enum days
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};
days checkWeather(const string &day)
{
    if (day == "monday")
        return monday;
    else if (day == "tuesday")
        return tuesday;
    else if (day == "wednesday")
        return wednesday;
    else if (day == "thursday")
        return thursday;
    else if (day == "friday")
        return friday;
    else if (day == "saturday")
        return saturday;
    else
        return sunday;
}
int main()
{
    string day;
    cout << "enter name of the day: ";
    cin >> day;

    switch (checkWeather(day))
    {
    case monday:
        cout << "It's raining!";
        break;
    case tuesday:
        cout << "It's sunny, not raining!";
        break;
    case wednesday:
        cout << "It's cooler than Monday!";
        break;
    case thursday:
        cout << "It`s slightly raining";
        break;
    case friday:
        cout << "Its cooler than thursday";
        break;
    case saturday:
        cout << "Its sunny day";
        break;
    case sunday:
        cout << "Its another sunny day";
        break;
        default:
        cout<< "invalid day";
    }
}
