#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
deque<int> dq;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  long long sum=0;
  
  for(int i=0;i<n;i++)
    {
      int x;
      cin >> x;
      dq.push_front(x);
    }

  if(n==3)
  {
    for(int i=0;i<2;i++)
      sum+=dq[i]*dq[i+1];
    sum+=dq[0]*dq[2];
    cout << sum << "\n";
    for(int i=0;i<n;i++)
      cout << dq[i] << " ";
  }
  else
  {
    sort(dq.begin(),dq.end());//0 1 2 - n-1
    dq.push_front(dq.at(n-3));
    dq.erase(dq.begin()+(n-2));
    
    if((dq.size()-4)%2==0)
    {
      int k=2;
      for(int i=1;dq.size()-k*2>=2;i++)
        {
          dq.insert(dq.begin()+i, dq[n-4-i+1]);
          dq.erase(dq.begin()+n-3-i+1);
          k++;
        }
    }
    else
    {
      int k=2;
      for(int i=1;dq.size()-k*2>=3;i++)
        {
          dq.insert(dq.begin()+i, dq[n-4-i+1]);
          dq.erase(dq.begin()+n-3-i+1);
          k++;
        }
    }

    for(int i=0;i<n-1;i++)
      sum+=dq[i]*dq[i+1];
    sum+=dq[0]*dq[n-1];
    cout << sum << "\n";
    for(int i=0;i<n;i++)
      cout << dq[i] << " ";
  }
}
