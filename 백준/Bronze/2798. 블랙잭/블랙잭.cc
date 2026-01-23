#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,max=0;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++)  cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<=m && sum>=max)  max=sum;
            }
        }
    }
    cout << max;
}