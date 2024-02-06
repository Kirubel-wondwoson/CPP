#include<iostream>
using namespace std;
int sumofdigits(int number);
int main()
{
    cout<<sumofdigits(2);
    cout<<endl<<endl;
    cout<<sumofdigits(1321);
    cout<<endl<<endl;
    cout<<sumofdigits(123456);
    return 0;
}
int sumofdigits(int number){
    if(number < 10){
        return number;
    }
    else{
        sumofdigits(number/10);
        sum = number%10;
    }
}