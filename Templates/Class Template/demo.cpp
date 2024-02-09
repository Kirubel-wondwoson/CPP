#include<iostream>
using namespace std;
// class c{
//     public:
//     int a = 3;
//     float b = 9;
//     c (int a,float b){
//         cout<<"addig";
//     }
// };
// int main(){
//     c ce(1,2.8);
//     // c ce2;
//     // ce.a = 5;
//     // cout<<ce.a<<endl<<ce2.a;
//     return 0;
// }
template<class n>
class number{
    public:
    n a =1;
    n b =2;
    int(a,b){
        cout<<a+b;
    }
};
int main()
{
    number<int>(3,4);
    return 0;
}





