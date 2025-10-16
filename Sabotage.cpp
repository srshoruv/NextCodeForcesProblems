#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n,x,k;
    cin >> n >> x >> k;

    in(v,n);
    sort(all(v));
    int idx;

    x += 100 * k;
    
    fr(i,0,n)
    {
    	
    	if (k <= 0) break;

    	if (v[i] > x)
    	{
    		v[i]=0;
    		--k;
    	}
    }

    v.push_back(x);

    sort(all(v));

    for(int i = v.size() - 1; i >= 0; i--)
    {

    	if ( v[i] == x)
    	{
    		idx = i;
    		break;
    	}

    }

    cout << n - idx + 1 << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}