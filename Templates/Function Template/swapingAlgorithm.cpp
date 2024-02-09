#include<iostream>
using namespace std;
template <class U,class V>
void swap(U &firstInput, U &secondInput);
int main()
{
    int n,m;
    float a,b;
    char c,d;
    cout<<"This is a Swap algorithm "<<endl;
    cout<<"Enter two integers : ";
    cin>>n>>m;
    swap(n,m);
    cout<<n<<" "<<m<<endl;
    cout<<"Enter two decimal numbers : ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<' '<<b<<endl;
    cout<<"Enter two characters : ";
    cin>>c>>d;
    swap(c,d);
    cout<<c<<' '<<d<<endl;
    return 0;
}
template <class U,class V>
void swap(U &firstInput,U &secondInput)
{
    U temp;
    temp = firstInput;
    firstInput = secondInput;
    secondInput = temp;
}