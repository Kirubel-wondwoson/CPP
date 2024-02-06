#include<iostream>
using namespace std;
//(1)
struct student{
    float mark[5];
};
float avgMark(float Mark[5]){
    float total;
    for(int i=0;i<5;i++){
        total += Mark[i];
    }
    return (total/5);
}
int main(){
    student s1;
    for(int i=0;i<5;i++){
        cout<<"Mark "<<i+1<<" : ";
        cin>>s1.mark[i];
    }
    //passing structure elements to function 
    cout<<avgMark(s1.mark); 
    return 0;
}
//(2)
//passing structure variable by value and return structure variable(entire structure)
struct person{
    string name;
    int age;
    float salary;
};
person getData(person);
void display(person);
int main(){
    person p1 , p2;
    p2 = getData(p1);
    display(p2);
    return 0;
}
person getData(person p){
    cout<<"Enter your name : ";
    cin>>p.name;
    cout<<p.name<<"'s age : ";
    cin>>p.age;
    cout<<p.name<<"'s salary : ";
    cin>>p.salary;
    return p;
}
void display(person p){
    cout<<"Your name is : "<<p.name<<endl;
    cout<<"Your age is : "<<p.age<<endl;
    cout<<"Your salary is : "<<p.salary;
}
//(3)
//passing structure variable by reference 
struct employee{
    string id;
    string name;
    int age;
    float salary;
};
employee getData(employee&);
void displayData(employee);
int main()
{
    employee e;
    getData(e);
    displayData(e);
    return 0;
}
employee getData(employee &e){
    cout<<"Enter id : ";
    cin>>e.id;
    cout<<"Enter full name : ";
    cin>>e.name;
    cout<<"Enter age : ";
    cin>>e.age;
    cout<<"Enter salary : ";
    cin>>e.salary;
    return e;
}
void displayData(employee e){
    cout<<e.id<<endl
        <<e.name<<endl
        <<e.age<<endl
        <<e.salary<<endl;
}
//(4)