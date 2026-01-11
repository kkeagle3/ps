#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    for(int i=0;i<8;i++){
        string line;
        cin >> line;
        if(i%2==0){ 
            for(int j=0;j<8;j+=2){
                if(line[j]=='F')
                    cnt++;
            }
        }
        else{
            for(int j=1;j<8;j+=2){
                if(line[j]=='F')
                    cnt++;
            }
        }
    }
    cout << cnt;
}