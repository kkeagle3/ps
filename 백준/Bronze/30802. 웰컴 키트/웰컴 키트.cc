#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size[6]={0};
    int n,t,p,min_t=0;
    cin >> n;
    for(int i=0;i<6;i++)    cin >> size[i];
    cin >>  t >> p;

    for(int i=0;i<6;i++){
        if(size[i]%t==0)    min_t+=size[i]/t;
        else        min_t+=size[i]/t+1;
    }   
    cout << min_t << "\n";
    cout << n/p << " " << n%p;
}