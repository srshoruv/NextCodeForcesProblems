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
    int n;
    cin >> n;

    vi ans;

    vector<vector<int>> v;

    fr(i,0,n)
    {
    	fr(j,0,n)
    	{
    		int x;
    		cin >> x;

    		if (find(all(ans), x) == ans.end()) ans.push_back(x);
    	}
    }

    fr(i,1,2*n+1)
    {
    	if(find(all(ans), i) == ans.end()) 
		{
			ans.insert(ans.begin(),i);
		}
    }

    fr(i,0,2*n) cout << ans[i] << " ";
    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}