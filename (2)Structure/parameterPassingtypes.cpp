#include<iostream>
using namespace std;
int swap1(int a , int b){    //pass by value
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<&a<<" "<<&b<<endl;//The address of the formal and actual parameter is differnt 
}
int swap2(int &a , int &b){ //pass by reference
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<&a<<" "<<&b<<endl;//The address of the formal and actual parameter is the same 
}
int main(){
    int x = 3 , y = 0;
    cout<<"*parameter passing by value"<<endl;
    cout<<&x<<" "<<&y<<endl;
    swap1(x , y);           
    cout<<x<<" " <<y<<endl;
    cout<<&x<<" "<<&y<<endl;
    cout<<endl<<endl;
    cout<<"*parameter passing by address"<<endl;
    cout<<&x<<" "<<&y<<endl;
    swap2(x , y);         
    cout<<x<<" " <<y<<endl;
    cout<<&x<<" "<<&y<<endl;
}