#include <iostream>

using namespace std;

int main()
{
    //Simple Interest Calculator
    double principal,rate,time,interest;
    cout<<"Enter Principal Amount: ";
    cin>>principal;
    cout<<"Enter Interest Rate (%): ";
    cin>>rate;
    cout<<"Enter Time Duration (in years): ";
    cin>>time;
    interest = (principal * time * rate)/100;
    cout<<"Simple Interest= "<<interest;
    return 0;

}
