#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,cnt=0;
    int man[7]={0}, wo[7]={0};
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(a==0)   wo[b]++;
        else    man[b]++; 
    }   
    for(int i=1;i<7;i++){
        cnt+=wo[i]/m+man[i]/m;
        if(wo[i]%m!=0)  cnt++;
        if(man[i]%m!=0) cnt++;
    }
    cout << cnt;
}