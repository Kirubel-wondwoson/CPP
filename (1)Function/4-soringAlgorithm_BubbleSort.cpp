#include<iostream>
using namespace std;
//Bubble algorithm
  //Accending order
int bubbleSort(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(arr[j-1]>arr[j]){
                int temp;
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
  //Decending order 
int bubbleSortReverse(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int size;
    cout<<"Enter a size of an array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"element "<<i+1<<" is : ";
        cin>>arr[i];
    }
    cout<<"Accending order ";
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Decending order ";
    bubbleSortReverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
