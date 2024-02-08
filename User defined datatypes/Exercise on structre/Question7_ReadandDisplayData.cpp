#include<iostream>
using namespace std;
struct Student{
    char name[20],gender;
    int age;
}stud;
void inputdata();
void displaydata();
int main(){
    Student Stud;
    inputdata();
    displaydata();
    return 0;
}
void inputdata(){
    cout<<"Name : ";
    cin>>stud.name;
    cout<<"Gender(M/F) : ";
    cin>>stud.gender;
    cout<<"Age : ";
    cin>>stud.age;
}
void displaydata(){
    cout<<stud.name<<endl;
    cout<<stud.gender<<endl;
    cout<<stud.age;
}
