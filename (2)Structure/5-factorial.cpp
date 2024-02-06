#include<iostream>
using namespace std;
int factorial(int number);
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<factorial(number);
    return 0;
}
int factorial(int number){
    int store =1;
    if(number == 0){
        return 1;
    }
    for(int i = number ; i > 0 ; i--){
        store *= i;
    }
    //or
    //for(int i = 0 ; i < number ; i++){
    //    store *= (number - 1);
    //}
    return store;
}