#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string line;
    int cnt=0;
    getline(cin,line);
    stringstream word(line);
    string w1;
    while(word>>w1)
        cnt++;
    cout << cnt;
}