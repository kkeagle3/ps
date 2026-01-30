#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    for(int i=0;i<3;i++){
        int b=0, d=0;
        for(int j=0;j<4;j++){
            cin >> a;
            if(a==0)    b++;
        }
        if(b==4)    cout << "D";
        if(b==3)    cout << "C";
        if(b==2)    cout << "B";
        if(b==1)    cout << "A";
        if(b==0)    cout << "E";
        cout << "\n";
    }
}