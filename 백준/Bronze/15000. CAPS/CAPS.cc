#include <iostream>
using namespace std;

int main()
{
    string line;
    cin >> line;
    for(int i=0;i<size(line);i++)
        line[i]-=32;
    cout << line;
}