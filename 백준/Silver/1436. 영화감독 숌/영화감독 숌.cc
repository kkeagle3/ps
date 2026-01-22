#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n;
    cin >> n;

    int cnt=0;
    int num=666;

    while(1){
        int temp=num;
        bool found = false;
        while(temp>=666){
            if(temp%1000==666){
                found=true;
                break;
            }
            temp/=10;
        }
        if(found){
            cnt++;
            if(cnt==n){
                cout << num;
                break;
            }
        }
        num++;
    }
    return 0;
}