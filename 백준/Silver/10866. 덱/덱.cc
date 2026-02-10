#include <bits/stdc++.h>
using namespace std;

int main(void){
  deque<int> de;
  int t;
  cin >> t;
  for(int i=0;i<t;i++){
    string line;
    cin >> line;
    int x;
    if(line=="push_front"){
      cin >> x;
      de.push_front(x);
    }
    else if(line=="push_back"){
      cin >> x;
      de.push_back(x);
    }
    else if(line=="pop_front"){
      if(de.empty())  cout << -1 << "\n";
      else{
        cout << de.front() << "\n";
        de.pop_front();
      }
    }
    else if(line=="pop_back"){
      if(de.empty())  cout << -1 << "\n";
      else{
        cout << de.back() << "\n";
        de.pop_back();
      }
    }
    else if(line=="size") cout << de.size() << "\n";
    else if(line=="empty"){
      if(de.empty())  cout << 1 << "\n";
      else  cout << 0 << "\n";
    }
    else if(line=="front"){
      if(de.empty())  cout << -1 << "\n";
      else  cout << de.front() << "\n";
    }
    else{
      if(de.empty())  cout << -1 << "\n";
      else cout << de.back() << "\n";
    }
  }
}