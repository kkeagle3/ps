#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double sum=0;
    cin >> n;

    if(n==0){
        cout << 0;
        return 0;
    }

    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());
    int cnt=round(double(n)*0.15);
    sum=accumulate(v.begin()+cnt,v.end()-cnt,0.0);
    cout << round(sum/(n-2*cnt));
}