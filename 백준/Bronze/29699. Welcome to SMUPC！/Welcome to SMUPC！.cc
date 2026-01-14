#include <iostream>
using namespace std;

int main()
{
    string line="WelcomeToSMUPC";
    int n;
    cin >> n;
    cout << line[(n-1)%14];
}