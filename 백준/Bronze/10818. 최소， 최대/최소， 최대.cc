#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,a,min=1000001, max=-1000001;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>max)
            max=a;
        if(a<min)
            min=a;
    }
    cout << min << " " << max;
}