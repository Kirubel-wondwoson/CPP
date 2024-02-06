#include<iostream>
using namespace std;
inline int fibonacci(int&);
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
inline int fibonacci(int& n){
    int a = 0;
    int b = 1;
    int nextnum ;
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    for(int i = 2 ; i <= n ; i++){
        nextnum = (a+b);
        int temp = b;
        a = b;
        b = nextnum;
    }
    return nextnum;
}