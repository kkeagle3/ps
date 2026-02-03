#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(7);
    for(int i=0;i<3;i++){
        int x;
        cin >> x;
        arr[x]++;
    }
    auto it=find(arr.begin(),arr.end(),3);
    if(it != arr.end()){
        cout << 10000+(it-arr.begin())*1000;
        return 0;
    }
    auto it2=find(arr.begin(),arr.end(),2);
    if(it2 != arr.end()){
        cout << 1000+(it2-arr.begin())*100;
        return 0;
    }
    for(int i=6;i>=1;i--){
        if(arr[i]==1){
            cout << i*100;
            break;
        }   
    }
}