#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outDocFile("Doc1.docx", ios::out);
    string name;
    int age, check;
    char sec;
    if (!outDocFile.is_open()){
        cout << "The file couldn't opened.";
        return 0;
    }
    outDocFile << "Name"<<"       "<<"Age"<<"   "<<"Section"<<endl;
    do{
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Your section?";
        cin >> sec;
        cout << "Enter 1 to continue  0 to stop";
        cin >> check;
        outDocFile << name << "     " << age << "      " << sec << endl;
        cin.ignore();
    } while (check == 1);
    string str = "end of file";
    outDocFile.write("end of file" , str.length());
    return 0;
}