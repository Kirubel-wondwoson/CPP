#include<iostream>
#include"9-power.h"
#include"9-powLibrary.h"
using namespace std;
int  main()
{
    float num , pow;
    cout<<"Enter a number : ";cin>>num;
    cout<<"Enter it's power : ";cin>>pow;
    //Exponential using function
    cout<<num<<" the power of "<<pow<<" is " <<findExpo(num , pow)<<endl;
    //Exponential using my own library
    cout<<num<<" the power of "<<pow<<" is "<<mypow(num , pow);
}