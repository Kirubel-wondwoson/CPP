#include<iostream>
using namespace std;
int main()
{
    float array[5]{2,4.4,5,6,7}; //It's just a brace intialization
    cout<<*array;
      // An array name used as a pointer
    int i=0;
    while(i<5){
        cout<<array[i]<<"  "<<*(array+i)<<endl;
        i++;
    }
      // Manipulate array elements using another pointer
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p = balance;
    for(int i=0;i<5;i++){
        cout<<balance[i]<<" "<<*(p+i)<<p[i]<<endl;
    }
      //Manipulate 2D array elements using array name as pointer and pointer
             //Array name as pointer
            int array2[3][4]{1,2,3,4,5,6,7,8,1,2,3,4};
            for(int i=0;i<3;i++){
               for(int j=0;j<4;j++){
                   cout<<*(*(array2+i)+j)<<" ";
               }
               cout<<endl;
            }
            //using pointer
            int *p2=&array2[0][0];
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    cout<<*(p2+i*4+j)<<" ";
                }
                cout<<endl;
            }
    return 0;
}