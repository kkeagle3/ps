#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,m,countN=1,countM=1;
  cin >> n >> m;
  int a[n],b[m];
  for(int i=0;i<n;i++)
    cin >> a[i];
  for(int i=0;i<m;i++)
    cin >> b[i];
  sort(a, a+n);
  sort(b, b+m);
  if(n>1&&m==1)
  {
    for(int i=0,k=1;i<n;i++)
      {
        if(a[i]+100<=a[k])
        {
          countN++;
          i=k;
        }
        if(a[i]+100>a[k])
        {
          i--;
          k++;
        }
        if(k==n)
          break;
      }
  }
  if(m>1&&n==1)
  {   
    for(int i=0,k=1;i<m;i++)
      {
        if(b[i]+360<=b[k])
        {
          countM++;
          i=k;
        }
        if(b[i]+360>b[k])
        {
          i--;
          k++;
        }
        if(k==m)
          break;
      }
  }
  if(m>1&&n>1)
  {
    for(int i=0,k=1;i<n;i++)
      {
        if(a[i]+100<=a[k])
        {
          countN++;
          i=k;
        }
        if(a[i]+100>a[k])
        {
          i--;
          k++;
        }
        if(k==n)
          break;
      }
    for(int i=0,k=1;i<m;i++)
      {
        if(b[i]+360<=b[k])
        {
          countM++;
          i=k;
        }
        if(b[i]+360>b[k])
        {
          i--;
          k++;
        }
        if(k==m)
          break;
      }
  }
  cout << countN << " " << countM;
  return 0;
}