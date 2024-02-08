#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
using namespace std;
struct Person{
    string name;
    char gender;
    int age;
    float weight, height, BMI;
};
Person person;
void accept();
float calculateBMI();
void display();
int main(){
    accept();
    calculateBMI();
    display();
    return 0;
}
void accept(){
    cout<<"Enter your name : ";
    cin>>person.name;
    assert(person.name.length() <= 15);
    cout<<"Enter your gender(M/F) : ";
    cin>>person.gender;
    person.gender = toupper(person.gender);
    assert(person.gender == 'M' || person.gender == 'F');
    cout<<"Enter your age : ";
    cin>>person.age;
    assert(person.age > 0 );
    cout<<"Enter your weight : ";
    cin>>person.weight;
    assert(person.weight > 0);
    cout<<"Enter your height : ";
    cin>>person.height;
    assert(person.height > 0);
}
float calculateBMI(){
    person.BMI = person.weight/pow(person.height, 2);
    return person.BMI;
}
void display(){
    cout<<"Name";
    for(int i = 0 ; i < person.name.length(); i++){
        cout<<" ";
    }
    cout<<"Gender   weight  height    BMI        comment"<<endl;
    cout<<person.name<<"    "<<person.gender<<"        "<<person.weight<<"      "<<person.height<<"       "<<person.BMI<<"   ";
    if(person.gender == 'M'){
        if(person.BMI > 25){
            cout<<"You are overweight."<<endl;
        }
        else if(person.BMI < 20){
            cout<<"You are underweight."<<endl;
        }
        else{
            cout<<"You are Normal.";
        }
    }
    else if(person.gender == 'F'){
        if(person.BMI > 23){
            cout<<"You are overweight."<<endl;
        }
        else if(person.BMI < 18){
            cout<<"You are underweight."<<endl;
        }
        else{
            cout<<"You are Normal.";
        }
    }
    else{
        cout<<"Invalid gender.";
    }
}
