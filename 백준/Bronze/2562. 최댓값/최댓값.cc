#include <iostream>
using namespace std;

int main()
{
    int in_num,max=-1,max_cnt=0;
    for(int i=0;i<9;i++)
    {
        cin >> in_num;
        if(in_num>max)
        {
            max=in_num;
            max_cnt=i+1;
        }
    }
    cout << max << "\n" << max_cnt;
}