#include <iostream>
using namespace std;
struct sweg
{
    string studSection;
    float fopResult;
    float mathResult;
    float iseResult;
};
struct studDataBase
{
    string studName;
    int age;
    string studId;
    sweg result;
};
int main()
{
    studDataBase student;
    student.result.studSection = 'C';
    student.result.mathResult = 95;
    student.result.fopResult = 100;
    student.result.iseResult = 80;
    cout << "Enter " << endl;
    cout << "Student name : ";
    cin >> student.studName;
    cout << student.studName << "'s age : ";
    cin >> student.age;
    cout << student.studName << "'s ID : ";
    cin >> student.studId;
    cout << "The database shows " << endl
         << "Section : " << student.result.studSection << endl
         << "math result : " << student.result.mathResult << endl
         << "ise result : " << student.result.iseResult << endl
         << "fop result : " << student.result.fopResult;
    return 0;
}