#include <iostream>
#include <cmath>
using namespace std;
int o_ke_d(int oktal);
int d_ke_o(int desimal);

int o_ke_d(int oktal)
{
    int desimal = 0, i = 0, rem;
    while (oktal != 0)
    {
        rem = oktal % 10;
        oktal /= 10;
        desimal += rem * pow(8, i);
        ++i;
    }
    return desimal;
}

int d_ke_o(int desimal)
{
    int rem, i = 1, octalNumber = 0;
    while (desimal != 0)
    {
        rem = desimal % 8;
        desimal /= 8;
        octalNumber += rem * i;

        i *= 10;
    }
    return octalNumber;
}