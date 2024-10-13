#include <iostream>
using namespace std;
string checkstudentstatus(int sthour,int stmints,int arhour,int armints);
main()
{
int sthour,stmints,arhour,armints;
string answer;

    cout<<"Enter starting time(hour):  ";
    cin>>sthour;
    cout<<"Enter starting time(minutes):  ";
    cin>>stmints;
    cout<<"Student hour of arrival: ";
    cin>>arhour;
    cout<<"Student minutes of arrival: ";
    cin>>armints;
    answer = checkstudentstatus(sthour, stmints, arhour, armints);
    cout<<answer;


}
string checkstudentstatus(int sthour,int stmints,int arhour,int armints)
{
string result , time;
int totalstmints,totalarmints,timediff,hours,mints;

    totalstmints = sthour*60 + stmints;
    totalarmints = arhour*60 + armints;
    timediff =  totalarmints - totalstmints ;
if (timediff > 60)
{   time ="Late";
    hours = timediff/60;
    mints = timediff%60;
    result = time + "\n" + to_string(hours)+":"+to_string(mints)+" hours after the exam start";
}
if (timediff < -30 && timediff > -60)
{
    time = "Early";
    timediff = -(timediff);
    mints = timediff;
    result = time + "\n" +to_string(mints)+" minutes before the exam start";
}
if (timediff >= -30 && timediff < 0)
{
    time = "On Time";
    timediff = -(timediff);
    
    mints = timediff;
    result = time + "\n" +to_string(mints)+"  minutes before the exam start"; ;
}
if (timediff <= -60)
{
    time = "Early";
    timediff = -(timediff);
    hours = timediff/60;
    mints = timediff%60;
    result = time + "\n" + to_string(hours)+":"+to_string(mints)+" hours before the exam start";
}
if (timediff >= 0 && timediff <= 60)
{   
    time = "Late";
    hours = timediff/60;
    mints = timediff;
    result = time + "\n" + to_string(hours)+":"+to_string(mints)+" minutes after the exam start";
}

return result; 

    

}