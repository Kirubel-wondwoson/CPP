#include <iostream>
using namespace std;
//overloading function with the same variable name and equal number of parameters but with different datatypes of parameters
float  myFun(int x , int y);
float  myFun(int x , float  y); 
int main()
{
    cout<<myFun(2 , 4)<<endl;
    cout<<myFun(3 , 8.4);
    return 0;
}
float  myFun(int x , int y){
    return x + y;
}
float  myFun(int x , float  y){
    return x + y;
}