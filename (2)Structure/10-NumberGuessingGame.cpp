#include <iostream>
#include<cstdlib>
using namespace std;
  //Number guessing game
void guessNum(){
     int numberguess;
    srand (static_cast<int>(time(0)));
    int randomnumber  = rand() % (10);
    cout<<"Guess a number from 1 thorugh 10 : ";
    cin>>numberguess;
    while(numberguess != randomnumber){
        cout<<"Sorry, Guess again : ";
        cin>>numberguess;
    }
    cout<<"Yeah, you get the number.";
}
int main()
{
    guessNum();
    return 0;
}