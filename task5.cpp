#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, int quantity);
main()
{string fruit,day;
int quantity;
float amount;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week: ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    amount = calculateFruitPrice( fruit,  day,  quantity);
    cout<<amount;
}
float calculateFruitPrice(string fruit, string day, int quantity)
{   float total_price;


    if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "banana")
    total_price = 2.50*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "apple")
    total_price = 1.20*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "orange")
    total_price = 0.85*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "grapefruit")
    total_price = 1.45*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "kiwi")
    total_price = 2.70*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "pineapple")
    total_price = 5.50*quantity;
    else if ((day == "Monday" ||day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"  )&& fruit == "grapes")
    total_price = 3.85*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "banana")
    total_price = 2.70*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "apple")
    total_price = 1.25*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "orange")
    total_price = 0.90*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "grapefruit")
    total_price = 1.60*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "kiwi")
    total_price = 3.00*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "pineapple")
    total_price = 5.60*quantity;
    else if ((day == "Saturday" ||day == "Sunday"  )&& fruit == "grapes")
    total_price = 4.20*quantity;
    else
    cout<<"error";
return total_price ;


}

