#include <iostream>
using namespace std;

int main()
{
    int a,n=0;
    for(int i=0;i<5;i++){
        cin >> a;
        n+=a*a;
    }
    cout << n%10;
}