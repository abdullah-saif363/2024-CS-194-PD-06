#include <iostream>
using namespace std;
float calculateAverage(float Englishmarks,float Mathmarks,float Chemistrymarks,float SocialSciencemarks,float Biologymarks);
string calculategrade(float average);
main()
{
string name;
int Englishmarks,Mathmarks,Chemistrymarks,SocialSciencemarks,Biologymarks;
 float average;
 string grade;   
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your English Marks:  ";
    cin>>Englishmarks;
    cout<<"Enter your Math Marks:  ";
    cin>>Mathmarks;
    cout<<"Enter your Chemistry Marks:  ";
    cin>>Chemistrymarks;
    cout<<"Enter your Social Science Marks:  ";
    cin>>SocialSciencemarks;
    cout<<"Enter your Biology Marks:  ";
    cin>>Biologymarks;
    cout<<"Name: "<<name<<endl;;
    average = calculateAverage( Englishmarks, Mathmarks, Chemistrymarks, SocialSciencemarks, Biologymarks);
    cout<<"Percentage is: "<<average<<endl;
    grade = calculategrade( average);
    cout<<"your grade is: "<<grade;
}
float calculateAverage(float Englishmarks,float Mathmarks,float Chemistrymarks,float SocialSciencemarks,float Biologymarks)
{
float average;
    average = ((Englishmarks+Mathmarks+Chemistrymarks+SocialSciencemarks+Biologymarks)/500)*100;
return average; 
}
string calculategrade(float average)
{
    string grade;
    if (average >= 90 && average < 100)
    grade = "A+";
    if (average >= 80 && average < 90)
    grade = "A";
    if (average >= 70 && average < 80)
    grade = "B+";
    if (average >= 60 && average < 70)
    grade = "B";
    if (average >= 50 && average < 60)
    grade = "C";
    if (average >= 40 && average < 50)
    grade = "D";
    if (average < 40 )
    grade = "F";
return grade;



}