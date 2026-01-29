#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[501]={0};
    for(int i=0;i<501;i++){
        int cur=i;
        while(cur/5>=5){
            arr[i]+=cur/5;
            cur/=5;
        }
        arr[i]+=cur/5;
    } 
    cin >> n;
    cout << arr[n];
}