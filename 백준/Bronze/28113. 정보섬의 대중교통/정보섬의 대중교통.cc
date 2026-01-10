#include <iostream>
using namespace std;

int main()
{
    int N,A,B;
    cin >> N >> A >> B;
    if(A>B)
        cout << "Subway";
    else if(A<B)
        cout << "Bus";
    else
        cout << "Anything";
}