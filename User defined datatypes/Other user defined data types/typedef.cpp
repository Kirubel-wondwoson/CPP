#include<iostream>
using namespace std;
typedef float *floatptr;
int main(){
    int numstud;
    floatptr mark;
    cout<<"Enter num of stud : ";
    cin>>numstud;
    mark = new float[numstud];
    int i = 0;
    cout<<"Student "<<endl;
    do{
        cout<<i+1<<" : ";
        cin>>mark[i];
        i++;
    }while(i<numstud);
     i = 0;
    do{
        cout<<"Stud "<<i+1<<"   ";
        i++;
    }while(i<numstud);
    cout<<endl;
     i = 0;
    do{
        cout<<mark[i]<<"      ";
        i++;
    }while(i < numstud);
    return 0;
}