#include<iostream>
using namespace std;
inline double power(double n , double e);
int main()
{
    double n , e;
    do{
        cout<<"Enter a number : ";
        cin>>n;
        cout<<"Enter its exponent : ";
        cin>>e;
        cout<<power(n , e);
        cout<<endl;
    }while(true);
    return 0;
}
inline double power(double n , double e){
    if(e < 0){
        exit(1); 
    }
    else if(e == 0){
        return 1;
    }
    return n *power(n , e-1);
}