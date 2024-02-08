#include<iostream>
using namespace std;
float mult(float num1 , float num2)
{
    float product = num1 * num2;
    return product;
}
int main()
{
    float num1 , num2 , product;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    product = mult(num1 , num2);
    cout<<product;
    return 0;
}