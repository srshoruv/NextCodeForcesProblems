#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vi v;

    fr(i,0,n)
    {
    	if(s[i]=='1') v.push_back(i+1);
    }

    int curr = v[0];

    fr(i,0,v.size())
    {
    	if(v[i] && v[i])
    }


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}