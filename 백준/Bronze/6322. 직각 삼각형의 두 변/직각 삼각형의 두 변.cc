#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n=1;
    while(1){
        int a,b,c;
        double result;
        cin >> a >> b >>c;
        if(a==0)
            break;
        cout << fixed << setprecision(3);
        cout << "Triangle #" << n << "\n";

        if(c==-1){
            result=a*a+b*b;
            cout << "c = " << sqrt(result) << "\n";
        }
        else if(a==-1){
            if(b>=c){
                cout << "Impossible." << "\n";
            }
            else{
                result=c*c-b*b;
                cout << "a = " << sqrt(result) << "\n";
            }
        }
        else{
            if(a>=c){
                cout << "Impossible." << "\n";
            }
            else{
                result=c*c-a*a;
                cout << "b = " << sqrt(result) << "\n";
            }
        }
        n++;
        cout << "\n";
    }
}