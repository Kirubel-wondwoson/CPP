#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    int numStud,numCourses;
    cout<<"Enter number of student : ";
    cin>>numStud;
    cout<<"Enter number of courses : ";
    cin>>numCourses;
    string *studName = new string[numStud] , *coursesName = new string[numCourses];
    float *studMark = new float[numStud*numCourses];
    cout<<"\nEnter name of the courses "<<endl;
    for(int i=0;i<numCourses;i++){
            cout<<"Name of course "<<i+1<<" is : ";
            cin>>coursesName[i];
            cin.ignore();
    }
    cout<<"\nEnter name of the students "<<endl;
    for(int i=0;i<numStud;i++){
        cout<<"Name of student "<<i+1<<" is : ";
        cin>>studName[i];
        cin.ignore();
    }
    cout<<"\n";
    for(int i=0;i<numStud;i++){
        for(int j=0;j<numCourses;j++){
            cout<<studName[i]<<"'s "<<coursesName[j]<<" mark : ";
            cin>>studMark[j];
            cin.ignore();
        }
    }
    for(int i=0;i<numCourses;i++){
        cout<<"        "<<coursesName[i];
    }
    delete[] coursesName;
    cout<<endl;
    for(int i=0;i<numStud;i++){
        cout<<studName[i]<<"  ";
        for(int j=0;j<numCourses;j++){
            cout<<studMark[j]<<"          ";
        }
        cout<<endl;
    }
    delete[] studName;
    delete[] studMark;
    return 0;
}