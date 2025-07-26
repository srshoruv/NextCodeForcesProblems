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

    vector<pair<int, int>> p;

    in(v,n);
    in(v1,n);

    int ans = 0;

    fr(l,1,101)
    {
    	int sum = 0;
    	fr (i,0,n)
    	{
    		if (v[i] < 0 || v1[i] > l)
    			continue;
    		sum += v[i];
    	}

    	ans = max(ans, sum - l);
    }

    cout << ans << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}