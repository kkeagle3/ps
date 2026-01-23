#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string line;
    cin >> t;
    for(int i=0;i<t;i++){
        stack<char> stack;
        cin >> line;
        bool isValid=true;
        for(char s : line){
            if(s=='(')  stack.push('(');
            else{
                if(!stack.empty())  stack.pop();
                else{
                    isValid=false;
                    break;;
                }
            }
        }
        if(isValid && stack.empty())   cout << "YES\n";
        else    cout << "NO\n";
    }
}