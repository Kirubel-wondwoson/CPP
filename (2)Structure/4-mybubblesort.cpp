#include<iostream>
#include<algorithm>
using namespace std;
void bubblesortasending(float arr[] , int size);
void bubblesortreverse(float arr[] , int size);
int main()
{
    int size;
    cout<<"What is the size of the array? ";
    cin>>size;
    float arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    bubblesortasending(arr , size);
    cout<<endl;
    bubblesortreverse(arr, size);            
    return 0;
}
//Ascending order
void bubblesortasending(float arr[] , int size){
    for(int i = 1 ; i < size ; i++){
        for(int j = 1 ; j < size ; j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1] , arr[j]);
            }
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}
//Decending order
void bubblesortreverse(float arr[] , int size){
    for(int i = 1 ; i < size ; i++){
        for(int j = 1 ; j < size ; j++){
            if(arr[j-1] < arr[j]){
                swap(arr[j-1] , arr[j]);
            }
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}