#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while(1){
        cin >> line;
        if(line=="0")   break;
        string revline=line;
        reverse(line.begin(),line.end());
        if(line==revline)   cout << "yes\n";
        else    cout << "no\n";
    }
}