#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int numofstud;
    string space;
    cout<<"Enter number of students : ";
    cin>>numofstud;
    string name[numofstud];
    float mark[numofstud];
    ifstream inputstudinfo("Doc1.docx" , ios::in);
    if(!inputstudinfo.is_open()){
        cout<<"The file couldn't open"<<endl;
    }
    for(int i = 0 ; i < numofstud ; i++){
        inputstudinfo>>name[i];
        cout<<name[i]<<"  ";
        inputstudinfo>>mark[i];
        cout<<mark[i]<<"  ";
        cout<<endl;
    }
    inputstudinfo.close();
    return 0;
}