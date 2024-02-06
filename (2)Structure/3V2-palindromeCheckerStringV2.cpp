#include<iostream>
#include<string>
using namespace std;
bool ispaliderome(string str);
int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    if(ispaliderome(str)){
        cout<<"Is paliderome";
    }
    else{
        cout<<"Is not paliderome";
    }
    return 0;
}
bool ispaliderome(string str){
    string str2 = str;
    int count = 0;
    for(int i = 0 , j = str.length()-1 ; i<str.length()-1 , j >= 0 ;i++ , j--){
        if(str[i] == str2[j]){
            count++;
        }
    }
    if(count != str.length()){
        return false;
    }
    return true;
}