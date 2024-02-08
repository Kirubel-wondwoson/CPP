#include<iostream>
using namespace std;
struct phone{
    int areacode,exchange,number;
};
phone phoNum1, phoNum2;
void accept();
void display();
int main(){
    phoNum1.areacode = 212;
    phoNum1.exchange = 767;
    phoNum1.number = 8900;
    cout<<"("<<phoNum1.areacode<<") "<<phoNum1.exchange<<"-"<<phoNum1.number<<endl;
    accept();
    display();
    return 0;
}
void accept(){
    cout<<"Enter the areacode : ";
    cin>>phoNum2.areacode;
    cout<<"Enter the exchange : ";
    cin>>phoNum2.exchange;
    cout<<"Enter the number : ";
    cin>>phoNum2.number;
}
void display(){
    cout<<"("<<phoNum2.areacode<<") "
        <<phoNum2.exchange<<"-"
        <<phoNum2.number;
}