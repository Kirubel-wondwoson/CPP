#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int numofstud;
    cout << "Enter number of students : ";
    cin >> numofstud;
    struct studinfo{
        string name;
        float mark;
    } stud[numofstud];
    ifstream inputstudinfo("Doc1.docx", ios::in);
    if (!inputstudinfo.is_open()){
        cout <<"unable to open.";
        exit(1);
    }
    for (int i = 0; i < numofstud; i++){
        inputstudinfo >> stud[i].name;
        cout << stud[i].name << "  ";
        inputstudinfo >> stud[i].mark;
        cout << stud[i].mark << "  ";
        cout << endl;
    }
    inputstudinfo.close();
    return 0;
}