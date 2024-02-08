#include <iostream>
using namespace std;
void readlist(float mark[] , int size);
float findmax(float mark[] , int size);
float findmax(float mark[] , int size);
float range(float mark[] , int size);
float mean(float mark[] , int size);
float median(float mark[] , int size);
void display(float mark[] , int size);
int main()
{
    int numcourses;
    cout<<"Enter the number of courses : ";
    cin>>numcourses;
    float mark[numcourses];
    readlist(mark , numcourses);
    display(mark , numcourses);
    return 0;
}
void readlist(float mark[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<"Mark of course "<<i+1<<" : ";
        cin>>mark[i];
    }
}
float findmax(float mark[] , int size){
    float max = mark[0];
    for(int i = 1 ; i < size ; i++){
        if(mark[i] > max){
            max = mark[i];
        }
    }
    return max;
}
float findmin(float mark[] , int size){
    float min = mark[0];
    for(int i = 1 ; i < size ; i++){
        if(mark[i] < min){
            min = mark[i];
        }
    }
    return min;
}
float range(float mark[] , int size){
    float max = findmax(mark , size);
    float min = findmin(mark , size);
    float range = max - min;
    return range;
}
float mean(float mark[] , int size){
    float mean , total = 0;
    for(int i = 0 ; i < size ; i++){
        total += mark[i];
    }
    mean = total/size;
    return mean;
}
float median(float mark[] , int size){
    float median;
    if(size%2 != 0){
        median = mark[(size/2)];
    }
    else{
        median = (mark[(size/2)-1] + mark[(size/2)])/2;
    }
    return median;
}
void display(float mark[] , int size){
    cout<<"Range : "<<range(mark , size)<<endl;
    cout<<"Mean : "<<mean(mark , size)<<endl;
    cout<<"Median : "<<median(mark , size)<<endl;
}