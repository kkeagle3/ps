#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,x;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)    cin >> vec[i];
    sort(vec.begin(),vec.end());
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> x;
        auto range=equal_range(vec.begin(),vec.end(),x);
        int cnt=distance(range.first,range.second);
        cout << cnt << " ";
    }
}
