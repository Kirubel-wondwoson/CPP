#include<iostream>
#include<fstream>
using namespace std;
void fun()
int main(){
    string name;int age;char sec;
    ifstream inDocFile("Doc1.docx" , ios::in);
    if(!inDocFile.is_open()){
        cout<<"The file couldn't open";
    }
    while(inDocFile.eof() == 0){
        inDocFile>>name>>age>>sec;
        cout<<name<<endl<<age<<endl<<sec<<endl<<endl;
    }
    inDocFile.close();
}