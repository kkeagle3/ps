#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int lcm=a*b;
    if(a<b){
        int temp=b;
        b=a;
        a=temp;
    }
    while(1){
        if(b==0) break;
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout << a << "\n" << lcm/a;
}