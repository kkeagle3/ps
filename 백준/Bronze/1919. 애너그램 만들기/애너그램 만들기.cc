#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;
    vector<int> a(26);
    vector<int> b(26);
    string line,line2;
    cin >> line >> line2;
    for(char s:line)    a[s-97]++;
    for(char s:line2)   b[s-97]++;
    for(int i=0;i<26;i++)   cnt+=abs(a[i]-b[i]);

    cout << cnt;
}