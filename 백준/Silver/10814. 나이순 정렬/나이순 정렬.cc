#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, string> &a, const pair<int,string> &b){
    return a.first < b.first;
}

int main()
{
    int n,age;
    string name;
    cin >> n;
    vector<pair<int, string>> v(n);
    for(int i=0;i<n;i++){
        cin >> age >> name;
        v[i]=make_pair(age, name);
    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++) cout << v[i].first << " " << v[i].second << "\n";
}