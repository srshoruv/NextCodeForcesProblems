#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    string s; cin >> s;

    vi v;
    fr(i,0,n)
    {
    	if(s[i] == '1') v.push_back(i);
    }

    if (v.size() == 2 && v[0]+1 == v[1]) no;

    else if(v.size() % 2) 
    {
    	no;
    }
    else if (v.size() % 2 == 0) yes;
    else no;



}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}