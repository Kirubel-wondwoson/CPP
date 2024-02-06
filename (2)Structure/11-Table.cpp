#include<iostream>
using namespace std;
 const int row =4  , colum =4 ;
inline void createTable(int table[][colum]);
int main()
{
    
    int table[row][colum];
    createTable (table);
    return 0;
}
inline void createTable(int table[][colum])
{
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < colum ; j++){
            cout<<"Row "<<i+1<<", "<<"Colum "<<j+1<<" : ";
            cin>>table[i][j];
        }
    }
    for(int i = 0 ; i< colum ; i++){
        cout<<"___";
    }
    cout<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < colum ; j++){
            cout<<"|"<<table[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
        for(int i = 0 ; i < colum ; i++){
            cout<<"___";
        }
        cout<<endl;
    }
}