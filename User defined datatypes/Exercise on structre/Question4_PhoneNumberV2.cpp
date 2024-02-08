#include<iostream>
using namespace std;
struct phone{
    int areacode, exchange, number;
};
struct Person{
    string name;
    phone phoNum;
};
void accept(int);
void display(int);
Person person[3]; 
int main(){
    int i;
    i = 0;
    do{
        accept(i);
        i++;
    }while(i<3); 
    cout<<"____________________________"<<endl;
    cout<<"Name           Phone number "<<endl;
    cout<<"_____________________________"<<endl;
    i = 0;
    do{
        display(i);
        cout<<endl;
        i++;
    }while(i<3);
    return 0;
}
void accept(int i){
    cout<<"Name of person "<<i+1<<" : ";
    cin>>person[i].name;
    cout<<person[i].name<<"'s phone number areacode : ";
    cin>>person[i].phoNum.areacode;
    cout<<person[i].name<<"'s phone number exchange : ";
    cin>>person[i].phoNum.exchange;
    cout<<person[i].name<<"'s phone number : ";
    cin>>person[i].phoNum.number;
}
void display(int i){
    cout<<person[i].name<<"       ("<<person[i].phoNum.areacode<<") "
        <<person[i].phoNum.exchange<<"-"<<person[i].phoNum.number;
}