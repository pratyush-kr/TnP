#include<iostream>

/*
given time in hh::mm find shorter angle between hour and minute
*/

int main()
{
    int hh = 3;
    int mm = 30;
    int h = hh*360/12 + mm/12;
    int m = (mm*360)/60;
    int angle = abs(h-m);
    if(angle > 180)
        angle = 360 - angle;
    std::cout<<angle<<'\n';
    return 0;
}