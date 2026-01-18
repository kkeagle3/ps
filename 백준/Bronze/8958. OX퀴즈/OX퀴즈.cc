#include <iostream>
using namespace std;

int main()
{
    string quize;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int cnt=0,now=0;
        cin >> quize;
        for(int i=0;i<quize.size();i++)
        {
            if(quize[i]=='O'){
                now++;
                cnt+=now;
            }
            else
                now=0;
        }
        cout << cnt << "\n";
    }
}