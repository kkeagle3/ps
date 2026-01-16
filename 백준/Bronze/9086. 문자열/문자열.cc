#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string line;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> line;
        cout << line.front() << line.back() << "\n";
    }
}