#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int number);
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(isprime(number)){
        cout<<number<<" is a prime number ";
    }
    else{
        cout<<number<<" is not a prime number ";
    }
    return 0;
}
bool isprime(int number){
    if(number < 2){
        return false;
    }
    else{
        for(int i = 2 ; i <= sqrt(number) ; i++){
            if(number % i == 0){
                return false;
            }
        }
    }
    return true;
}