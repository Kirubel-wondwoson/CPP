#include<iostream>
using namespace std;
int main()
{                                 //CONSTANT POINTERS
   int a = 5 , b=7 , c=5 ;  //int *const ptr;(constant pointer)
                            //const int *ptr;(pointer to constant)
                            //const int *const ptr;(pointer constant to constant)
   int *const ptr = &a; //constant pointer  - the value can be changed but the address is constant
   cout<<*ptr<<"\t"<<ptr<<endl;
   *ptr = 10; // is acceptable
   cout<<*ptr<<"\t"<<ptr<<endl;
   // ptr = &b;  - is not acceptable
   const int *ptr2 = &b; //pointer to constant - the address can be changed but the value can not be changed
   cout<<*ptr2<<"\t"<<ptr2<<endl;
    ptr2 = &c; // is acceptable
   cout<<*ptr2<<"\t"<<ptr2<<endl;
   // *ptr2 = 30; - is not acceptable
   const int* const ptr3 =&c; //pointer constant to constant - both the address and the value can not be changed
   cout<<*ptr3<<"\t"<<ptr3<<endl;
   // *ptr3 = 48; - is not acceptable 
   // ptr3 = &b - is not acceptable
  
return 0;
}