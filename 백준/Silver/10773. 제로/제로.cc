#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<long long int> v;
  for(int i=0;i<n;i++){
    long long int x;
    cin >> x;
    if(x==0)  v.pop_back();
    else  v.push_back(x);
  }
  long long int sum=0;
  for(long long int a : v)  sum+=a;
  cout << sum;
}