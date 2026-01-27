#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> people(n);
    for(int i=0;i<n;i++) cin >> people[i].first >> people[i].second;
    for(int i=0;i<n;i++){
        int grade=1;
        for(int j=0;j<n;j++){
            if(i==j)    continue;
            if(people[i].first<people[j].first && people[i].second<people[j].second)
                grade++;
        }
        cout << grade << " ";
    }
}