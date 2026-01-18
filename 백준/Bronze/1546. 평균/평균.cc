#include <iostream>
#include <numeric>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);

    double max=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]>max) max=v[i];
    }

    for(int i=0;i<n;i++)    v[i]=v[i]/max *100;
    cout << fixed << setprecision(2);
    double sum=accumulate(v.begin(),v.end(),0.0);
    cout << sum/n;
}