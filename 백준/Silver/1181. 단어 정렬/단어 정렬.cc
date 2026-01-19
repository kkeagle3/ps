#include <bits/stdc++.h>
using namespace std;

bool compare(const string &a, const string &b){
    if(a.size()==b.size())  return a<b;
    return a.size()<b.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);
    
    for(int i=0;i<n;i++)    cin >> v[i];

    sort(v.begin(),v.end(),compare);
    v.erase(unique(v.begin(),v.end()), v.end());
    for(string a : v)   cout << a << "\n";
}