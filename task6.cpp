#include <iostream>
using namespace std;
string calculatehostelprice(string month,int days);
float sprice=0,aprice=0;
main()
{
string month,result;
int days;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the number of days you want to stay: ";
    cin>>days;
    result = calculatehostelprice( month, days);
    cout<<result;
    
}
string calculatehostelprice(string month,int days)
{
string result;

    if (month == "May" || month == "October")
{
    if (days < 7)
    sprice = days*50;
    else if (days > 7 && days <= 14)
    sprice = (days*50)- ((days*50)*0.05);
    else if (days > 14 )
    sprice = (days*50)- ((days*50)*0.3);
    if (days <= 14)
    aprice = days*65;
    else if (days > 14 )
    aprice =  (days*65) -((days*65)*0.1);

}
else if (month == "June "  || month == "September")
{
    if (days <= 14)
    sprice = 75.20*days;
    if (days> 14)
    sprice = (75.20*days) - ((75.20*days)*0.2);
    if (days <= 14)
    aprice = days*68.70;
    else if (days > 14 )
    aprice =  (days*68.70) -((days*68.70)*0.1);

    
}
else if (month == "July "  || month == "August")
{
    if (days >= 1)
    sprice = 75.6*days;
     if (days <= 14)
    aprice = days*77;
    else if (days > 14 )
    aprice =  (days*77) -((days*77)*0.1);
}

result = "Apartment " + to_string(aprice) + "$" + "\n" + "Studio" + to_string(sprice) + "$";
return result;









}