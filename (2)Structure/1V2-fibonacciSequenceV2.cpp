#include<iostream>
using namespace std;
void fibonacci(int digit);
int main()
{
    int digit;
    cout<<"What is the limit of the fibonacci sequence : ";
    cin>>digit;
    return 0;
}
void fibonacci(int digit){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int i = 2;
    do{
        int nextNum = a + b;
        cout<<nextNum<<" ";
         a = b;
         b = nextNum;
         i++;
    }while(i < digit);   
}