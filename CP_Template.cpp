#pragma GCC optimize("O3")
#include <bits/stdc++.h>

#define re cin>>
#define op cout<<
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define mii map<int,int>
#define mci map<char,int>
#define mil map<int,long long int>
#define p pair<int,int>
#define pb push_back;
#define ppb pop_back;

#define lp(i,s,e) for(int i=s;i<e;i++)
#define te(t) while(t--)
using namespace std;

// Debugging macros
template<typename T>
void _debug(T a) {
    if (typeid(a) == typeid(char)) cout << '\'';
    if (typeid(a) == typeid(string)) cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char)) cout << '\'';
    if (typeid(a) == typeid(string)) cout << '\"';
    cout << "]" << endl;
}
template<typename T, typename... Args>
void _debug(T a, Args... b) {
    if (typeid(a) == typeid(char)) cout << '\'';
    if (typeid(a) == typeid(string)) cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char)) cout << '\'';
    if (typeid(a) == typeid(string)) cout << '\"';
    cout << ",\t";
    _debug(b...);
}
template<typename... Args>
void debug(Args... b) { cout << '['; _debug(b...); }

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
    
  return 0;
}
