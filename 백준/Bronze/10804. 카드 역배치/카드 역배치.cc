#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<10;i++){
        int a,b;
        cin >> a >> b;
        for(int j=a-1;j<a-1+(b-a+1)/2;j++){
            int temp=arr[j];
            arr[j]=arr[a+b-2-j];
            arr[a+b-2-j]=temp;
        }
    }
    for(int i:arr)  cout << i << " ";
}