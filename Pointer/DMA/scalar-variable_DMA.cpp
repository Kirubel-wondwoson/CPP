#include<iostream>
using namespace std;
int main()
{
    int *num = new int; //allocating memory
    cout<<"Enter a number : ";
    cin>>*num;
    cout<<"The number you entered is "<<*num<<endl;
    delete num;   //deallocating memory
    cout<<*num<<endl; //print garbage value
    num = new int; //allocating memory
    cout<<"Enter a number :";
    cin>>*num;
    cout<<"The number you entered is "<<*num<<endl;
    delete num;

return 0;
}