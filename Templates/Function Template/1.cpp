#include<iostream>
using namespace std;
template <class T>
T findMax(T n1, T n2){
    if(n1 > n2){
        cout<<n1<<" > "<<n2;
    }
    else if(n1 < n2){
        cout<<n1<<" < "<<n2;
    }
    else{
        cout<<n1<<" = "<<n2;
    }
    return 0;
}
int main()
{
    findMax(2,4);
    cout<<endl;
    findMax('t','a');
}