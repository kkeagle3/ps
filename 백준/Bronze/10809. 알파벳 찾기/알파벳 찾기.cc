#include <iostream>
using namespace std;

int main()
{
    string line;
    cin >> line;
    int arr[26];
    fill(arr,arr+26,-1);
    for(int i=0;i<line.size();i++){
        if (arr[line[i]-97]==-1) arr[line[i]-97]=i;
    }
    for(int i=0;i<26;i++)
        cout << arr[i] << " ";
}