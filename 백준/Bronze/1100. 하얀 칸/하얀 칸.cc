#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    for(int i=0;i<8;i++){
        string line;
        cin >> line;
        for(int j=i%2;j<8;j+=2){
            if(line[j]=='F')
                cnt++;
        }
    }
    cout << cnt;
}
