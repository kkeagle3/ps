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
        if(a==0 && b==0 && c==0)
            break;
        else{
            cout << fixed << setprecision(3);

            if(c==-1){
                result=a*a+b*b;
                cout << "Triangle #" << n << "\n";
                cout << "c = " << sqrt(result) << "\n";
            }
            else if(a==-1){
                if(b>=c){
                    cout << "Triangle #" << n << "\n";
                    cout << "Impossible." << "\n";
                }
                else{
                    result=c*c-b*b;
                    cout << "Triangle #" << n << "\n";
                    cout << "a = " << sqrt(result) << "\n";
                }
            }
            else{
                if(a>=c){
                    cout << "Triangle #" << n << "\n";
                    cout << "Impossible." << "\n";
                }
                else{
                    result=c*c-a*a;
                    cout << "Triangle #" << n << "\n";
                    cout << "b = " << sqrt(result) << "\n";
                }
            }
        }
        n++;
        cout << "\n";
    }
}