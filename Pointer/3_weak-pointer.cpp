#include<iostream>
#include<memory>
using namespace std;
int main(){
    weak_ptr<int>ptr1;
    {
        shared_ptr<int>ptr2 = make_shared<int>(39);
        ptr1=ptr2;
    }   
    shared_ptr<int>ptr3 = ptr1.lock();
    cout<<ptr3.get()<<endl;
    cout<<*ptr3;
    int<unique_ptr>=new int;
    return 0;
}