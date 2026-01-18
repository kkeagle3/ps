#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);

    double max=0,sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]>max) max=v[i];
    }
    for(int i=0;i<n;i++)    sum+=v[i]/max *100;
    cout << sum/n;
}