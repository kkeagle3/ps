#include <iostream>
using namespace std;

int main()
{
    long long int sum=1;
    int n;
    cin >> n;
    for(int i=1;i<n+1;i++)
        sum*=i;
    cout << sum;
}