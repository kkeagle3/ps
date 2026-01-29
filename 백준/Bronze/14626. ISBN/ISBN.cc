#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string line;
    cin >> line;
    int index;
    for(int i=0;i<line.length();i++){
        if(line[i]=='*')    
            index=i;
    }
    for(int i=0;i<10;i++){
        line[index]=i+'0';
        int arr[13];
        for(int j=0;j<13;j++)   arr[j]=line[j]-'0';
        if(arr[12]==(10-(arr[0]*1+arr[1]*3+arr[2]*1+arr[3]*3+arr[4]*1+arr[5]*3+arr[6]*1+arr[7]*3+arr[8]*1+arr[9]*3+arr[10]*1+arr[11]*3)%10)%10){
            cout << i;
            return 0;
        }
    }
}