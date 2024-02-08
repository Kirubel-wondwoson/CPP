#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
    string id;
    float marks[3], avg;
    int rank;
};
Student *stud = new Student[5];
void display();
int main()
{
    int i = 0; 
    do
    {
        float total = 0;
        cout << "Enter your id : ";
        cin >> stud[i].id;
        for (int j = 0; j < 3; j++)
        {
            cout << "Mark of subject " << j + 1 << " : ";
            cin >> stud[i].marks[j];
            total += stud[i].marks[j];
        }
        stud[i].avg = total/3;
        i++;
    }while(i < 5);
    display();
    return 0;
}
void display()
{
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 - i ; j++){
            if(stud[j].avg < stud[j+1].avg){
                swap(stud[j].avg , stud[j+1].avg);
                swap(stud[j].id , stud[j+1].id);
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        stud[i].rank = i+1;
    }
    cout<<"___________________________________"<<endl;
    cout<<"ID            Rank         Average"<<endl;
    cout<<"___________________________________"<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<stud[i].id<<"    "<<stud[i].rank<<"            "<<stud[i].avg;
        cout<<endl;
    }
    cout<<"___________________________________"<<endl;
}