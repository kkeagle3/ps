#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double res1 = (a * b) / c;
    double res2 = (a / b) * c;

    long long final_res = (long long)max(res1, res2);
    cout << final_res << endl;

    return 0;
}