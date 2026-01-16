#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r1,r2,r3,r4,r5;
    cin >> r1 >> r2 >> r3 >> r4 >> r5;
    cout << (r1*r1+r2*r2+r3*r3+r4*r4+r5*r5)%10;
}