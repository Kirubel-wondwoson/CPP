#include <iostream>
#include <fstream>
#include<string>
using namespace std;
const int numStud = 5;
int main()
{
    struct studinfo{
        string name;
        int age;
        char sec;
    }stud[numStud];
    ofstream writetoDoc1("Doc1.docx" , ios::out);
    if(!writetoDoc1.is_open()){
        cout<<"Unable to open";
        return 0;
    }
    writetoDoc1<<"Name"<<"     "<<"Age"<<"   "<<"Section"<<endl;
    writetoDoc1<<"_______________________"<<endl;
    int i = 0;
    do{
        i<numStud;
        cout<<"Your name : ";
        cin>>stud[i].name;
        cout<<"Your age : ";
        cin>>stud[i].age;
        cout<<"Your section : ";
        cin>>stud[i].sec;
        writetoDoc1<<stud[i].name<<"  "<<stud[i].age<<"    "<<stud[i].sec<<endl;
        writetoDoc1<<"_________________________"<<endl;
        i++;
        if(i == numStud){
            break;
        }
    }while(i < numStud);
    writetoDoc1.clear();
    return 0;
}