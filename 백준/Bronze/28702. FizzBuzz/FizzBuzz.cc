#include <bits/stdc++.h>
using namespace std;

bool isNumber(string s){
    if(s.empty()) return false;
    for(int i=0;i<s.length();i++){
        if(!isdigit(s[i]))  return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    string arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    if(isNumber(arr[0])){
        int a=stod(arr[0])+3;
        if(a%3==0 && a%5==0) cout << "FizzBuzz";
        else if(a%3==0) cout << "Fizz";
        else if(a%5==0) cout << "Buzz";
        else    cout << a;
    }
    
    else if(isNumber(arr[1])){
        if(isNumber(arr[1])){
        int a=stod(arr[1])+2;
        if(a%3==0 && a%5==0) cout << "FizzBuzz";
        else if(a%3==0) cout << "Fizz";
        else if(a%5==0) cout << "Buzz";
        else    cout << a;
    }
    }
    else{
        if(isNumber(arr[2])){
        int a=stod(arr[2])+1;
        if(a%3==0 && a%5==0) cout << "FizzBuzz";
        else if(a%3==0) cout << "Fizz";
        else if(a%5==0) cout << "Buzz";
        else    cout << a;
    }
    }
}