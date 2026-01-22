#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());

    cin >> m;
    for(int i=0;i<m;i++){
        int target;
        cin >> target;
        if(binary_search(v.begin(),v.end(),target)) cout << 1 << "\n";
        else    cout << "0" << "\n";
    }
}