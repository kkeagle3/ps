#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double r;
    cout << fixed << setprecision(2);
    while(1){
        cin >> r;
        if(r==0)    return 0;
        if(r>1)   cout << (r*r*r*r*r-1)/(r-1) << "\n";
        else if(r==1)   cout << "5.00\n";
        else    cout << (1-r*r*r*r*r)/(1-r) << "\n";
    }
}