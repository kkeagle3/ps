#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a[2],b[2];
  for(int i=0;i<2;i++)  cin >> a[i];
  for(int i=0;i<2;i++)  cin >> b[i];

  cout << min(a[0]+b[1],a[1]+b[0]);
}