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
    int n,f,a,b; cin >> n >> f >> a >> b;

    in(v,n);

    f -= min(v[0]*a, b);

    if (f <= 0)
    {
    	no; return;
    }

    fr(i,1,n)
    {
    	f -= min((v[i]-v[i-1])*a, b);
    	if (f <= 0)
    	{
    		no; return;
    	}
    }

    yes;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}