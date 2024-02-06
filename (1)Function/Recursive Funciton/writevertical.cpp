#include<iostream>
using namespace std;
void writevertical(int number);
int main()
{
    writevertical(2);
    cout<<endl<<endl;
    writevertical(1321);
    cout<<endl<<endl;
    writevertical(123456);
    return 0;
}
void writevertical(int number){
    if(number < 10){
        cout<<number;
    }
    else{
        writevertical(number/10);
        cout<<number%10;
    }
    cout<<endl;
}