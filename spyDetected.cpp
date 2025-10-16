#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    in(v,n);

    int similar;

    if (v[0] == v[1] || v[0] == v[2])
    {
    	similar = v[0];
    }
    else
    {
    	similar = v[1];
    }

    fr(i,0,n)
    {
    	if(v[i] != similar)
    	{
    		cout << i+1 << endl;
    		break;
    	}
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}