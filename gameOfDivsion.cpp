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
    int n,k;
    cin >> n >> k;

    in(v,n);

    int res;
    bool found = true;
    fr(i,0,n)
    {
    	found = true;
    	fr(j,0, n)
    	{
    		if(abs(v[i]-v[j]) % k == 0 && i != j)
    		{
    			found = false;
    			break;
    		}
    	}

    	if(found) 
		{
			res = i+1;
			break;
		}
    }

    if(found)
    {
    	cout << "YES\n" << res << endl;
    }
    else cout << "NO\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}