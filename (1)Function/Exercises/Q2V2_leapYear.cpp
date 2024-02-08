#include <iostream>
using namespace std;
bool isLeapYear(int year);
int main()
{
    int year;
    cout<<"Enter the year(like 2023): ";
    cin>>year;
    if(isLeapYear(year))
    {
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }         
}
bool isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}