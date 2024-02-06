#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[100];
    char ch;
    ofstream myprint("Doc1.docx");
    //read a string from a keybored
    do{
        cout<<"Enter a string : ";
        gets(str);
        myprint<<str;
        cout<<"Enter c to continue s to stop";
        cin>>ch;
    }while(ch == 'c');
    myprint<<"\0";
    myprint.close();
    return 0;
}