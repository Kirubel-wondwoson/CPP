#include<iostream>
using namespace std;
inline int fibonacci(int);
int main()
{
    int n;
    do{
    cout<<"Enter the limit of the fibonacci sequence : ";
    cin>>n;
    cout<<fibonacci(n);
    cout<<endl;
    }while(true);
    return 0;
}
inline int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1 || n == 2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}