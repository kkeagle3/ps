#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(const pair<ll, ll> &a, const pair<ll,ll> &b){
    if (a.first - a.second > b.first - b.second)
        return true;
    else if (a.first - a.second < b.first - b.second)
        return false;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    ll sum=0;
    ll beginHigh=0;
    ll lowHigh=0;

    vector<pair<ll,ll>> arr(n);
    vector<ll> high;

    for(int i=0;i<n;i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<n;i++){
        beginHigh+=arr[i].first;
        high.push_back(beginHigh);
        beginHigh-=arr[i].second;
        lowHigh=min(lowHigh,beginHigh);
    }
    sum=accumulate(high.begin(),high.end(),0ll);
    sum-=lowHigh*high.size();

    cout << sum;
    
    return 0;
}