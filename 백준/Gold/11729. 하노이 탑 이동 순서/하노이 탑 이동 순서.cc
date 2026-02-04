#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b,int n){
  if(n==1) cout << a << " " << b << "\n";
  else{
    hanoi(a,6-a-b,n-1);
    cout << a << " " << b << "\n";
    hanoi(6-a-b,b,n-1);
  }
}

int main() {
  int n;
  cin >> n;
  long long dp[21];
  dp[1]=1;
  for(int i=2;i<=n;i++)
    dp[i]=dp[i-1]*2+1;
  cout << dp[n] << "\n";
  hanoi(1,3,n);
}