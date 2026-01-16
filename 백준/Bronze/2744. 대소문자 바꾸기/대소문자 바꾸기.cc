#include <iostream>
using namespace std;

int main()
{
    string line;
    cin >> line;
    for(int i=0; i<size(line);i++){
        if(int(line[i])>96)
            cout << char(line[i]-32);
        else
            cout << char(line[i]+32);
    }
}