#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,cnt=1;
    queue<int> q;
    cin >> n >> k;
    for(int i=1;i<n+1;i++) q.push(i);
    cout << '<';
    while(!q.empty()){
        for(int i=0;i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if(!q.empty()) cout << ", ";
    }
    cout << '>';
}
