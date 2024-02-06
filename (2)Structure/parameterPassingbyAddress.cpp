#include<iostream>
using namespace std;
void calculate(double , double , double , double& , double&);
int main()
{
    double a , b , c , sum , product;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    calculate(a , b , c , sum , product); //sum and total , product and prod   have the same memory location
    cout<<sum<<endl;
    cout<<product;
    return 0;
}
void calculate(double x , double y , double z , double &total , double &prod){
    total = x + y + z;
    prod = x*y*z;
    return;
}