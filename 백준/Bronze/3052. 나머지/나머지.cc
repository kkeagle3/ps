#include <iostream>
using namespace std;

int main()
{
    int a,cnt=0;
    int arr[42]={0};
    for(int i=0;i<10;i++){
        cin >> a;
        if(arr[a%42]==0) cnt++;
        arr[a%42]++;
    }
    cout << cnt;
}