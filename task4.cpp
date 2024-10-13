#include <iostream>
using namespace std;
float calculate_amount(char code,char time,int mints);
main()
{ char code,time;
int mints;
float amount;

    cout<<"Enter the service code(R/r for regular,P/p for premium):  ";
    cin>>code;
    cout<<"Enter the time of the call(D/d for day,N/n for night): ";
    cin>>time;
    cout<<"Enter the number of minutes used: ";
    cin>>mints;
    if (code == 'r' || code == 'R')
    cout<<"Service Type: Regular "<<endl;
    if (code == 'p' || code == 'P')
    cout<<"Service Type: Premium "<<endl;
    cout<<"Total Minutes Used: "<<mints<<" minutes"<<endl;

    amount = calculate_amount( code, time, mints);
    cout<<"Amount Due: $"<<amount;



}
float calculate_amount(char code,char time,int mints)
{
int mint;
float Amount_dues;
    if ((code == 'r'|| code == 'R') && ((time == 'N')||(time == 'n')||(time == 'D')||(time == 'd'))&& mints <= 50)
    Amount_dues = 10;
    if ((code == 'r'|| code == 'R') && ((time == 'N')||(time == 'n')||(time == 'D')||(time == 'd'))&& mints > 50)
{
    mint = mints - 50;
     Amount_dues = 10 + (mint*0.20);
}
    if ((code == 'p'|| code == 'P') && ((time == 'D')||(time == 'd'))&& mints <= 75)
    Amount_dues = 25;
    if ((code == 'p'|| code == 'P') && ((time == 'D')||(time == 'd'))&& mints > 75)
 {   mint = mints - 75;
    Amount_dues = 25 + (mint*0.10);
 }
    if ((code == 'p'|| code == 'P') && ((time == 'n')||(time == 'N'))&& mints <= 100)
    Amount_dues = 25;
     if ((code == 'p'|| code == 'P') && ((time == 'n')||(time == 'N'))&& mints > 100)
 {   mint = mints - 100;
    Amount_dues = 25 + (mint*0.05);
 }
 else 
   cout<<"error";
return Amount_dues ;



}