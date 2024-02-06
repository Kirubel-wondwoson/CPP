#include<iostream>
using namespace std;
int main()
{
    int numStud;
    cout<<"Enter number of students : ";
    cin>>numStud;
    float *mark = new float[numStud];
    cout<<"Enter mark of "<<endl;
    for(int i=0;i<numStud;i++){
        cout<<"Student "<<i+1<<" : ";
        cin>>mark[i];
    }
    for(int i=0;i<numStud;i++){
        cout<<mark[i]<<endl;
    }
    delete[] mark;
    return 0;
}