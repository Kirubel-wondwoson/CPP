#include<iostream>

using namespace std;
template <typename T>
void bubbleSort(T a[], int size){
    for(int i = 0 ; i < size - 1; i++){
        for(int j = size - 1; j < i ; j--){
            if(a[j] < a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
int main()
{
    int a[5]={3,2,5,1,7};
    bubbleSort<int>(a,5);
    for(int i = 0 ; i < 5; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
