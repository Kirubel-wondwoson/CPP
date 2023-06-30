#include<iostream>
using namespace std;
int getProduct(int a , int b , int *product);
int main(){
    int product;
    cout<<getProduct(2 , 6 , &product);
    return 0;
}
int getProduct(int a , int b , int *product){
    *product = a*b;
    return *product;
}