#include <iostream>
using namespace std;
int fibonacci(int n){
    int a1,a2,nextNum;
    a1 = 0;a2 = 1;
    cout<<a1<<" "<<a2<<" ";
    for(int i=2;i<n;i++){
        nextNum = a1 + a2;
        cout<<nextNum<<" ";
        a1 = a2;
        a2 = nextNum;
    }
    return nextNum;
}
int main(){
    int n;
    cout<<"Enter the limit of a fibonacci sequence :";
    cin>>n;
    fibonacci(n);
    return 0;
}