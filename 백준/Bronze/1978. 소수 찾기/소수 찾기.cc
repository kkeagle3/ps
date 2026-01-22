#include <bits/stdc++.h>
using namespace std;

bool isDecimal(int a){
    for(int i=2;i<a/2+1;i++){
        if(a%i==0)  return false;
    }
    return true;
}

int main()
{
    int t,a,cnt=0;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        if(a==1)    continue;
        if(a==2 || isDecimal(a))    cnt++;
    }
    cout << cnt;
}