#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    char arr1[8][8]=
    {
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
    };
    char arr2[8][8]=
    {
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},        
    };
    int n,m,min_cnt=65;
    cin >> n >> m;

    vector<string> input(n);
    for(int i=0;i<n;i++)    cin >> input[i];

    for(int i=0;i<n-7;i++){
        for(int j=0;j<m-7;j++){
            int cnt1=0;
            int cnt2=0;

            for(int x=0;x<8;x++){
                for(int y=0;y<8;y++){
                    if(input[i+x][j+y] != arr1[x][y])   cnt1++;
                    if(input[i+x][j+y] != arr2[x][y])   cnt2++;
                }
            }
            min_cnt=min(min_cnt,min(cnt1,cnt2));
        }
    }
    cout << min_cnt;
}