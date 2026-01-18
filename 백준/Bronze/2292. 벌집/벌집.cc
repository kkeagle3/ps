#include <iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin >> n;
    while(1){
        if(n<=3*i*i-3*i+1) break;
        i++;
    }
    cout << i;
}