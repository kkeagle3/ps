#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    for(int i=0;i<100;i++){
        getline(cin, line);
        cout << line << "\n";
    }

}