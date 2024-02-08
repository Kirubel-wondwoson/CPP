#include<iostream>
using namespace std;
struct Employee{
    string name;
    int num, hours;
    float rate;
}employee[5];
void accept(int);
void display();
int main(){
    int i = 0;
    return 0;
}
void accept(int i){
    cout<<"Enter your name : ";
    cin>>employee[i].name;
    cout<<"Enter your number : ";
    cin>>employee[i].num;
    cout<<"Enter hours : ";
    cin>>employee[i].hours;
    cout<<"Enter the rate : ";
    cin>>employee[i].hours;
}