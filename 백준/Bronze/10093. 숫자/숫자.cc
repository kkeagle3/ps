#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b;
    cin >> a >> b;
    if(a==b) cout << 0 << "\n";
    else if(a>b){
        cout << a-b-1 << "\n";
        for(int i=b+1;i<a;i++)  cout << i << " ";
    }
    else{
        cout << b-a-1 << "\n";
        for(int i=a+1;i<b;i++)  cout << i << " ";
    }
}