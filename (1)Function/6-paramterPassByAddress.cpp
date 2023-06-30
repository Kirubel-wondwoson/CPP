#include<iostream>
using namespace std;
float findQueotient(float a , float b , float &answer);
int main(){
    float result;
    cout<<findQueotient(20 , 2 , result);
    return 0;
}
float findQueotient(float a , float b , float &answer){
    answer = a/b;
    return answer;
}