#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r=1;
    long long int sum=0;
    cin >> l;
    string line;
    cin >> line;
    vector<long long int> vec;
    for(char c : line)  vec.push_back(c-96);
    for(int i=0;i<l;i++){
        sum+=(vec[i]*r)%1234567891;
        r=r*31%1234567891;
    }
    cout << sum%1234567891;
}