#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  for(int i=0;i<t;i++){
    list<char> pw;
    string line;
    cin >> line;
    list<char>::iterator iter=pw.begin();
    for(char s : line){
      if(s=='<'){
        if(iter!=pw.begin())  iter--;
      }
      else if(s=='>'){
        if(iter!=pw.end())  iter++;
      }
      else if(s=='-'){
        if(iter!=pw.begin()){
          iter--;
          iter=pw.erase(iter);
        }
      }
      else  pw.insert(iter,s);
    }
    for(char s:pw)  cout << s;
    cout << "\n";
  }
}