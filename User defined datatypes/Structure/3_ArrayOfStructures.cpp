#include<iostream>
using namespace std;
struct book{
    int bookId;
    int pages;
    float prices;
};
int main()
{    
    book b[3] =  {{20324 , 39 ,49},   //b[0]
                  {40394 , 54 , 20},  //b[1]
                  {43048 , 39 ,30}};  //b[2]
    cout<<b[1].pages;
}