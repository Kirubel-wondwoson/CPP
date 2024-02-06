#include<iostream>
#include"8-loginPage.h"
#include<string.h>
using namespace std;
int main()
{
    char name[10] = "Kirubel" , password[16] = "Kirubel1995" , inputUN[10] , inputPW[16];
    cout<<"ENTER USER NAME : ";
    cin>>inputUN;
    cout<<"ENTER THE PASSWORD : ";
    cin>>inputPW;
    logIn(name , password , inputUN , inputPW);
    return 0;
}