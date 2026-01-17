#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    string line;
    int n,S;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> S >> line;
        for(int j=0;j<size(line);j++){
            for(int k=0;k<S;k++)
                cout << line[j];
        }
        cout << "\n";
    }
}