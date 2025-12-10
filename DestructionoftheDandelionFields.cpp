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
    int n; cin >> n;

    vi even, odd;

    fr(i,0,n)
    {
    	int x; cin >> x;
    	if (x % 2)
    	{
    		odd.push_back(x);
    	}
    	else
    	{
    		even.push_back(x);
    	}
    }

    int ans = 0;

    if (odd.size())
    {
    	fr(i,0,even.size())
    	{
    		ans += even[i];
    	}

    	sort(rall(odd));
    	
    	int j = (odd.size() / 2) + odd.size() % 2;

    	fr(i,0,j)
    	{
    	
			ans += odd[i];
    		
    	} 
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