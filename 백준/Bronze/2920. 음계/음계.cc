#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int da;
    vector<int> v;
    for(int i=0;i<8;i++){
        cin >> da;
        v.push_back(da);
    }
    vector<int> v2=v;
    vector<int> v3=v;
    sort(v2.begin(),v2.end());
    sort(v3.rbegin(),v3.rend());
    if(v==v2)
        cout << "ascending";
    else if(v==v3)
        cout << "descending";
    else
        cout << "mixed";
    
}