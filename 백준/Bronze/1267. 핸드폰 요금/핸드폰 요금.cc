#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,young=0,min=0;
    cin >> n;
    for(int i=0;i<n;i++){
        young+=10;
        min+=15;
        int x;
        cin >> x;
        young+=x/30*10;
        min+=x/60*15;
    }
    if(young==min)  cout << "Y M " << min; 
    else if(young>min) cout << "M " << min;
    else    cout << "Y " << young;
}