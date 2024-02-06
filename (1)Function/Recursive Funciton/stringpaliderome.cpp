#include<iostream>
using namespace std;
int i = 0 , count = 0;
void ispalinderome(char str[] , int size);
int main()
{
    char str[8];
    cout<<"Enter a string : ";
    cin>>str;
    ispalinderome(str , 8);
    return 0;
}
void ispalinderome(char str[] , int size){
    if(ispalinderome(str , size-1) == ispalinderome(str , i++) || i < size || size >= 0){
        count++;
    }
    if(count == size){
        cout<<"Is palindromr";
    }
    else{
        cout<<"Is not palindrome";
    }
} 