#include <iostream>
#include <string>
using namespace std;
struct Student{
    string id, name;
    float testMark, finalMark, totalMark;
};
Student students[3];
void accept(int);
float calcMark(int);
void display(int);
int main(){
    int i = 0;
    do{
        accept(i);
        calcMark(i);
        i++;
    } while (i < 3);
    cout << "________________________________________" << endl;
    cout << "Name      ";
    cout << "id           ";
    cout << "Total Mark" << endl;
    cout << "________________________________________" << endl;
    i = 0;
    do{
        display(i);
        cout<<endl;
        cout << "________________________________________" << endl;
        i++;
    } while (i < 3);
    return 0;
}
void accept(int i)
{
    cout << "Enter the Id number(at most 15 character) : ";
    cin >> students[i].id;
    cout << "Enter your name(at most 15 character) : ";
    cin >> students[i].name;
    cout << "Enter the test result : ";
    cin >> students[i].testMark;
    cout << "Enter the final result : ";
    cin >> students[i].finalMark;
}
float calcMark(int i)
{
    students[i].totalMark = students[i].testMark + students[i].finalMark;
    return students[i].totalMark;
}
void display(int i)
{
    cout << students[i].name << "    " << students[i].id << "  " << students[i].totalMark;
}