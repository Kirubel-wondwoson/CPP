#include <iostream>
#include <fstream>
using namespace std;
struct studInfo{
    string name;
    int age;
    char sec;
} stud[3];
void readfile(int, string);
void writefile(int, string);
int main(){
    int numstud = 3;
    string str;
    readfile(numstud, str);
    writefile(numstud, str);
    return 0;
}
void readfile(int numstud, string str){
    ifstream inputData("Doc1.docx", ios::in);
    inputData >> str;
    for (int i = 0; i < numstud; i++){
        inputData >> stud[i].name;
        inputData >> stud[i].age;
        inputData >> stud[i].sec;
        inputData >> str;
    }
}
void writefile(int numstud, string str){
    ofstream outputData("Doc2.docx", ios::out);
    outputData << str;
    for (int i = 0; i < numstud; i++){
        outputData << stud[i].name;
        outputData << stud[i].age;
        outputData << stud[i].sec;
        cout << endl;
        outputData << str;
    }
}