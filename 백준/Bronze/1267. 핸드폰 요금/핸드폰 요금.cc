#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Y_fee=0, M_fee=0;
    for(int i=0;i<N;i++){
        int minute;
        cin >> minute;
        Y_fee+=(minute/30+1)*10;
        M_fee+=(minute/60+1)*15;
    }
    if(Y_fee>M_fee)
        cout << "M " << M_fee;
    else if(Y_fee<M_fee)
        cout << "Y " << Y_fee;
    else
        cout << "Y M " << Y_fee;
}