#include <iostream>
using namespace std;
int InserstionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int reverseInsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
    }
}
int main()
{
    int size;
    cout << "Enter a size of an array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " is : ";
        cin >> arr[i];
    }
    // Acesending order
    InserstionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // Decending order
    return 0;
}