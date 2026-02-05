#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(9);
    for(int i=0;i<9;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int sum=accumulate(v.begin(),v.end(),0);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(sum-v[i]-v[j]==100){
                v.erase(v.begin()+j);
                v.erase(v.begin()+i);
                for(int i:v)    cout << i << "\n";
                return  0;
            }
        }
    }
}