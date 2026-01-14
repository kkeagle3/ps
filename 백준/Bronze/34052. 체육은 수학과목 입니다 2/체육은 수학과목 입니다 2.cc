#include <iostream>
using namespace std;

int main()
{
    int r1,r2,r3,r4;
    cin >> r1 >> r2 >> r3 >> r4;
    if(r1+r2+r3+r4+300>1800)
        cout << "No";
    else
        cout << "Yes";
}