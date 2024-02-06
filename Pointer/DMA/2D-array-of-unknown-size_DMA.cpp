#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int numStud,numCourses;
    cout<<"Enter number of student : ";
    cin>>numStud;
    cout<<"Enter number of courses : ";
    cin>>numCourses;
    float *studMark = new float[numStud * numCourses];
    cout<<"Enter Mark of students "<<endl;
    for(int i=0;i<numStud;i++){
        for(int j=0;j<numCourses;j++){
            cout<<"Mark of course "<<j+1<<" of student "<<i+1<<" : ";
            cin>>*(studMark + i*numCourses + j);
        }
    }
    for(int i=0;i<numCourses;i++){
        cout<<setw(18)<<"course "<<i+1;
    }
    cout<<endl;
    for(int i=0;i<numStud;i++){
        cout<<"Student "<<i+1<<"  ";
        for(int j=0;j<numCourses;j++){
        cout<<"   "<<*(studMark + i*numCourses + j)<<"                ";
        }
        cout<<endl;
    }

    return 0;
}