#ifndef POWER_H
#define POWER_H
int findExpo(int num , int pow)
{
    if(pow < 0){
        return 0;
    }
    else if(pow == 0){
        return 1;
    }
    return num*findExpo(num , pow - 1);
}
#endif