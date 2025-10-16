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
    int n, k;
    cin >> n >> k;

    in(v,n);
    sort(all(v));

    while(k--)
    {
    	if ((v[0]+v[1]) % 2 == 0)
    	{
    		int p = (v[0] + v[1]) / 2;
    		v.push_back(p);
    	}
    	else
    	{
    		int p = (v[0] + v[1]+1) / 2;
    		v.push_back(p);

    	}
    }
    int sum = 0;
    fr (i,0,v.size())
    {
    	sum += v[i];
    }

    cout << sum << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}