#include <iostream>
using namespace std;

int main()
{
    int asc=0,des=0;
    int input[8];
    for(int i=0;i<8;i++){
        cin >> input[i];
        if(i>0){
            if(input[i]>input[i-1]) asc++;
            else if(input[i]<input[i-1]) des++;
        }
    }
    if(asc==7) cout << "ascending";
    else if(des==7) cout << "descending";
    else    cout << "mixed"; 
    return 0;  
}