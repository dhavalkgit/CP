#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define re cin >>
#define op cout <<
#define ll long long int

#define vi vector<int>
#define vll vector<long long int>
#define mii map<int, int>
#define mci map<char, int>
#define mil map<int, long long int>
#define msll multiset<long long int>
#define pi pair<int, int>
#define _s set<int>
#define pb(x) push_back(x);
#define ppb pop_back();

#define flp(i,s,e) for (int i = s; i < e; i++)
#define rlp(i,s,e) for(int i=s-1; i>=e; i--)
#define _test int t; cin>>t; while(t--)

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#ifndef ONLINE_JUDGE
    #define debug(x) cerr<<#x<<" ";_print(x);cerr<<endl;
#else
    #define debug(x)
#endif  

template<class T> void _print(T x){cerr<<x;}
template<class T> void _print(vector<T>v){cerr<<"[ ";for(T el:v){_print(el);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T>st){cerr<<"[ ";for(T el:st){_print(el);cerr<<" ";}cerr<<"]";}
template<class T> void _print(multiset<T>st){cerr<<"[";for(T el:st){_print(el);cerr<<" ";}cerr<<"]";}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("error.txt","w",stderr);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio;
    _test{
        // write your code here 
    }
    return 0;
}
