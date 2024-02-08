#include<iostream>
using namespace std;
bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month , int year);
int main()
{
    string month;
    int day , year;
    cout<<"Enter a date : "<<endl;
    cout<<"month(eg. July) : ";
    cin>>month;
    cout<<"Day : ";
    cin>>day;
    cout<<"Year : ";
    cin>>year;
    // Check leap year 
    if(isLeapYear(year)){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    cout<<endl;
    //find century of the year
    cout<<getCenturyValue(year)<< "century";
    return 0;
}
bool isLeapYear(int year){
    if(year%4 != 0){
        return false;
    }
    else{
        if(year %100 == 0 && year % 400 != 0){
            return false;
        }
    }
    return true;
}
int getCenturyValue(int year){
    int store;
    if(year >= 1000 && year < 10000){
        do{
           if(year < 100){
             break;
            }
            year = year/10;
         }while(year > 0);
    }
    else{
        cout<<"Sorry, the program works for years in b/n 1000 and 10000";
    }
    store = year/4;
    store = 3 - store;
    store = 2 * store;
    cout<<"->"<<store<<endl;
    return year;
}
int getYearValue(int year){

}
int getMonthValue(int month , int year){

}