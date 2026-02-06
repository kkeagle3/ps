#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        vector<int> ori(26);
        vector<int> input(26);
        string a, b;
        cin >> a >> b;
        for(char s:a)   ori[s-97]++;
        for(char s:b)   input[s-97]++;

        if(ori==input)  cout << "Possible\n";
        else    cout << "Impossible\n";
    }

}