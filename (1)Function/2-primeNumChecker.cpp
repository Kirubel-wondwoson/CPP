#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n){
    if(n<=1){
        return false;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number ";
    }
    else{
        cout<<n<<" is not a prime number ";
    }
    return 0;
}