#ifndef LOGINPAGE_H
#define LOGINPAGE_H 
#include<iostream>
#include<string.h>
using namespace std;
void logIn(char UN[10] , char PW[16] , char inputUN[10] , char inputPW[16])
{
    if(strlen(inputUN) >10 || strlen(inputPW) < 6 && strlen(inputPW) > 10){
        cout<<"INVALID NAME OR PASSWORD SIZE";  
    }
    else{
        if(strcmp(UN , inputUN) == 0 && strcmp(PW , inputPW) == 0){
            cout<<"WELCOME "<<inputUN<<" YOU ARE LOGGED IN";
        }
        else{
            cout<<"THE PASSWORD OR USERNAME IS INCORRECT";
        }
    }
}
#endif