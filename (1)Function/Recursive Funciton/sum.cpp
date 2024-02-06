#include<iostream>
using namespace std;
inline int sum(int n);
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result = sum(n);
    cout<<result;
    return 0;
}
inline int sum(int n){
    if(n > 0){
        return n+sum(n-1);
    }
}
