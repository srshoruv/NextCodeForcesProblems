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
    int n,m;
    cin >> n >> m;

    in(v,n);

    int currMax = *max_element(all(v));

    vi ans;

    while(m--)
    {

    	char c; 
    	int x, y;

    	cin >> c >> x >> y;

    	if(currMax >= x && currMax <= y)
    	{
    		if(c=='+')
    		{
    			++currMax;
    		}
    		else
    		{
    			--currMax;
    		}
    	}

    	ans.push_back(currMax);

    }

    for (auto x : ans)
    {
    	cout << x << " ";
    }
    cout << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}