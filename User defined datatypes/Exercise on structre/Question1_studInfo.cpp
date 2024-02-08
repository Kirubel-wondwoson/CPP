#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    string id,name;
    float testMark, finalMark, totalMark;
};
Student student;
void accept();
float calcMark();
void display();
int main(){
    accept();
    calcMark();
    display();
    return 0;
}
void accept(){
    cout<<"Enter the Id number(at most 15 character) : ";
    cin>>student.id;
    cout<<"Enter your name(at most 15 character) : ";
    cin>>student.name;
    cout<<"Enter the test result : ";
    cin>>student.testMark;
    cout<<"Enter the final result : ";
    cin>>student.finalMark;  
}
float calcMark(){
    student.totalMark = student.testMark + student.finalMark;
    return student.totalMark;
}
void display(){
    cout<<"________________________________________"<<endl;
    cout<<"Name";
    for(int i = 0 ; i < student.name.length() ;i++){
        cout<<" ";
    }
    cout<<"id";
    for(int i = 0 ; i < student.name.length() ; i++){
        cout<<" ";
    }
    cout<<"Total Mark"<<endl;
    cout<<"________________________________________"<<endl;
    cout<<student.name<<"    "<<student.id<<"  "<<student.totalMark;
}