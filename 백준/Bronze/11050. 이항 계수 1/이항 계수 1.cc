#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k,mo=1,ja=1;
    cin >> n >> k;
    for(int i=n;i>n-k;i--) mo*=i;
    for(int i=k;i>0;i--) ja*=i;
    cout << mo/ja;
}