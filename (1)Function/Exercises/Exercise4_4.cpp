#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string str);
int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    if(ispalindrome(str)){
        cout<<str<<" is not palindrome.";
    }
    else{
        cout<<str<<" is palindrome.";
    }
    return 0;
}
bool ispalindrome(string str)
{
    string temp = str;
    for(int i = 0 , j = str.length() ; str[i] != '\0' , j>0; i++ , j--){
        if(str[i] == temp[j]){
            return true;
        }
    }
    return false;
}