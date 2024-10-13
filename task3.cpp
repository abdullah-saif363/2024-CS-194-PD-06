#include <iostream>
using namespace std;
string findzodiacsign(int date,string month);
main()
{int date;
string month,sign;

    cout<<"Enter the date of birth: ";
    cin>>date;
    cout<<"Enter the month of birth: ";
    cin>>month;
    sign = findzodiacsign( date, month);
    cout<<"Zodiac Sign: "<<sign;


}
string findzodiacsign(int date,string month)
{string sign;
    if (((date >= 21 && date <32)&& month == "March")|| ((date >= 1 && date <20)&& month == "April") )
    sign = "Aries";
    if (((date >= 21 && date <31)&& month == "April")|| ((date >= 1 && date <21)&& month == "May") )
    sign = "Taurus";
    if (((date >= 21 && date <32)&& month == "May")|| ((date >= 1 && date <21)&& month == "June") )
    sign = "Gemini";
    if (((date >= 21 && date <31)&& month == "June")|| ((date >= 1 && date <23)&& month == "July") )
    sign = "Cancer";
    if (((date >= 23 && date <32)&& month == "July")|| ((date >= 1 && date <23)&& month == "August") )
    sign = "Leo";
    if (((date >= 23 && date <32)&& month == "August")|| ((date >= 1 && date <23)&& month == "September") )
    sign = "Virgo";
    if (((date >= 23 && date <31)&& month == "September")|| ((date >= 1 && date <23)&& month == "October") )
    sign = "Libra";
    if (((date >= 23 && date <32)&& month == "October")|| ((date >= 1 && date <22)&& month == "November") )
    sign = "Scorpio";
    if (((date >= 22 && date <31)&& month == "November")|| ((date >= 1 && date <22)&& month == "December") )
    sign = "Sagittarius";
    if (((date >= 22 && date <32)&& month == "December")|| ((date >= 1 && date <20)&& month == "January") )
    sign = "Capricorn";
    if (((date >= 20 && date <32)&& month == "January")|| ((date >= 1 && date <19)&& month == "February") )
    sign = "Aquarius";
return sign;





}