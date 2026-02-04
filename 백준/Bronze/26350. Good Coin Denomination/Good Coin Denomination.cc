#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x;
        cin >> x;
        bool flag=true;
        vector<int> v(x);
        for(int j=0;j<x;j++)    cin >> v[j];

        for(int j=1;j<x;j++){
            if(v[j-1]*2<=v[j])  continue;
            else{
                flag=false;
                break;
            }
        }
        cout << "Denominations: ";
        for(int x:v)    cout << x << " ";
        cout << "\n";
        if(flag)  cout << "Good coin denominations!\n";
        else cout << "Bad coin denominations!\n";
        cout << "\n";
    }
}