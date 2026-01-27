#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5001];
    fill(arr,arr+5001,9999);
    arr[0]=0;
    for(int i=3;i<5001;i++){
        if(i>=3)    arr[i]=min(arr[i],arr[i-3]+1);
        if(i>=5)    arr[i]=min(arr[i],arr[i-5]+1);
    }
    if(arr[n]>=9999)  cout << -1;
    else    cout << arr[n];
}