#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    string line;
    stack<int> st;
    for(int i=0;i<n;i++){
        cin >> line;
        if(line=="push"){
            cin >> x;
            st.push(x);
        }
        else if(line=="pop"){
            if(st.empty())  cout << "-1\n";
            else{
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if(line=="size")   cout << st.size() << "\n";
        else if(line=="empty"){
            if(st.empty())  cout << "1\n";
            else    cout << "0\n";
        }
        else{
            if(st.empty())  cout << "-1\n";
            else    cout << st.top() << "\n";
        }
    }
}
