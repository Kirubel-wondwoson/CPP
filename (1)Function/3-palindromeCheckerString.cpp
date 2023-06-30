#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int isPalindrome(string str){
    string revStr = str;
    reverse(revStr.begin(),revStr.end());
    if(str == revStr){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    if(isPalindrome(str)){
        cout<<str<<" is palindrome ";
    }
    else{
        cout<<str<<" is not palindrome ";
    }
}