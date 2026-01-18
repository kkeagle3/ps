#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    long long int result=a*b*c; 
    int arr[10]={0};
    while(result/10!=0){
        arr[result%10]++;
        result/=10;
    }
    arr[result]++;
    for(int i=0;i<10;i++)
        cout << arr[i] << "\n";
}