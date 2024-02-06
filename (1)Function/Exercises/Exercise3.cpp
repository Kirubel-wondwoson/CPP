#include <iostream>
#include "Exercise3StringManuplation.h"
using namespace std;
int main()
{
    string str, str1, str2, reverse, lower, upper;
    int length, vowelNum, consonantNum, compare;
    cout << "Enter a string : ";
    cin >> str;
    length = findLength(str);
    vowelNum = countVowel(str);
    consonantNum = countConsonant(str);
    reverse = reverseStr(str);
    lower = mytolower(str);
    upper = mytoupper(str);
    // display
    cout << "The length : " << length << endl;
    cout << "Number of vowel : " << vowelNum << endl;
    cout << "Number of consonant : " << consonantNum << endl;
    cout << "The reverse : " << reverse << endl;
    cout << "The lowercase version : " << lower << endl;
    cout << "The uppercase version : " << upper << endl;
    // asking two strings
    cout << "Enter two strings "<<endl;
    cout<<"The first str : ";cin>>str1;
    cout<<"The second str : ";cin>>str2;
    compare = compareStr(str1, str2);
    // display for two strings
    cout << compare << endl;
    return 0;
}