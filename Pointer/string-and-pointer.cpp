#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *names[] {"Kirubel","Abenezer","David"};
    int len1 = strlen(names[0]);
    int len2 = strlen(names[1]);
    int len3 = strlen(names[2]);
    cout.write(names[0],len1).put('\n');
    cout.write(names[1],len2).put('\n');
    cout.write(names[2],len3);
    return 0;
}