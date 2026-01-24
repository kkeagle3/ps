#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=5;
    string name;
    cin >> n;
    vector<pair<string, int>> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i].first >> vec[i].second;
        if(vec[i].second<min)
        {
            name=vec[i].first;
            min=vec[i].second;
        }
    }
    cout << name;
}
