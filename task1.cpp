#include <iostream>
using namespace std;
string decideactivity(string temp,string humd);
main()
{
    string temp,humd,result;

    cout<<"Enter the temperature(warm or cold): ";
    cin>>temp;
    cout<<"Enter the humidity(dry or humid): ";
    cin>>humd;
    result = decideactivity( temp, humd);
    cout<<result;
}
string decideactivity(string temp,string humd)
{
    string result;
    if (temp == "warm" && humd == "dry")
    result = "play tennis";
    if (temp == "warm" && humd == "humid")
    result = "swim";
    if (temp == "cold" && humd == "humid")
    result = "watch TV";
    if (temp == "cold" && humd == "dry")
    result = "play basketball";
return result;


}