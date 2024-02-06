#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int>shPtr = make_shared<int>(10);
    cout<<*shPtr<<" "<<shPtr<<" "<<shPtr.use_count()<<endl;
    {
      shared_ptr<int>shPtr2 = shPtr;
       cout<<*shPtr<<" "<<shPtr<<" "<<shPtr.use_count()<<endl;
    }
    shared_ptr<int>shPtr2 = shPtr;
   cout<<*shPtr<<" "<<shPtr<<" "<<shPtr.use_count()<<endl;
   return 0;
}