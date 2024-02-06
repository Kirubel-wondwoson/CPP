#include<iostream>
using namespace std;
struct name{
    string p1;
    string p2; 
    string p3;
};
int main(){
    name name1 , name2;
    name1 = {"Kirubel" , "Abenezer" , "Neway"};
    name2 = name1; //one structure variable can be assigned to another struture variable if they are the same type 
    //name2 == name1
    //name2 > name1    but this kind of aggregate operation is not valid like an array
    cout<<name1.p1<<' '<<name1.p2<<' '<<name1.p3<<endl;
    cout<<name2.p1<<' '<<name2.p2<<' '<<name2.p3;
    return 0;
}