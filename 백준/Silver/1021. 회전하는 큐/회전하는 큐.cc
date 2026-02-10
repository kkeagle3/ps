#include <bits/stdc++.h>
using namespace std;

int main(void){
  deque<int> de1;
  deque<int> de2;
  int n,m,x,cnt=0;
  cin >> n >> m;
  for(int i=1;i<n+1;i++) de1.push_front(i);
  for(int i=1;i<n+1;i++) de2.push_front(i);
  for(int i=0;i<m;i++){
    cin >> x;
    int min1=0,min2=0;
    while(de1.back()!=x){
      de1.push_back(de1.front());
      de1.pop_front();
      min1++;
    }
    while(de2.back()!=x){
      de2.push_front(de2.back());
      de2.pop_back();
      min2++;
    }
    de2.pop_back();
    de1.pop_back();
    cnt+=min(min1,min2);
  }
  cout << cnt;
}