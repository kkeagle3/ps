#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,in;
    cin >> n;
    int arr[10001]={0};
    for(int i=0;i<n;i++){
        cin >> in;
        arr[in]++;
    }
    for(int i=1;i<10001;i++){
        for(int j=0;j<arr[i];j++)   cout << i << "\n";
    }
}