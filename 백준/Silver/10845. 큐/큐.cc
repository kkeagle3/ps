#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    string line;
    queue<int> qu;

    for(int i=0;i<n;i++){
        cin >> line;
        if(line=="push"){
            cin >> x;
            qu.push(x);
        }
        else if(line=="pop"){
            if(qu.empty())  cout << "-1\n";
            else{
                cout << qu.front() << "\n";
                qu.pop();
            }
        }
        else if(line=="size")   cout << qu.size() << "\n";
        else if(line=="empty"){
            if(qu.empty())  cout << "1\n";
            else    cout << "0\n";
        }
        else if(line=="front"){
            if(qu.empty())  cout << "-1\n";
            else    cout << qu.front() << "\n";
        }
        else{
            if(qu.empty())  cout << "-1\n";
            else    cout << qu.back() << "\n";
        }
    }
}
