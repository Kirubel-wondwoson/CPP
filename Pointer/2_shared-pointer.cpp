#include<iostream>
#include<math.h>
#include<memory>
using namespace std;
 int square(int x){
    long xSquare=pow(x,2);
    cout<<xSquare;
    return xSquare;
}
int main() {
    int y;
    cin>>y;
    square(y);
    return 0;  
}
