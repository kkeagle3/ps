#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,total=0;
    cin >> n >> m;
    vector<int> root(m);
    vector<vector<int>> fee(n,vector<int>(n,0));
    for(int i=0;i<m;i++)    cin >> root[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin >> fee[i][j];
    }
    for(int i=0;i<m-1;i++)  total+=fee[root[i]-1][root[i+1]-1];
    cout << total;   
}