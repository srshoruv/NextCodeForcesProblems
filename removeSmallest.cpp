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
    sort(all(v));

    bool sats = true;

    if (n==1)
    {
    	sats = true;
    }
    else
    {
    	fr(i,1,n)
	    {
	    	if(abs(v[i]-v[i-1]) > 1)
	    	{
	    		sats = false;
	    		break;
	    	}
	    }
    }

    if (sats) cout << "YES\n";
    else cout << "NO\n";

    


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}