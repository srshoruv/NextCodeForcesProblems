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
    int n,k, count = 0, countK = 0, countL = 0;
    cin >> n >> k;

    vi vL, v;

    set<int> s;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;

    	if (x < k) 
    	{
    		countL++;
    		s.insert(x);
    	}

    	if (x == k) countK++;
    }

    if (k == s.size())
    {
    	cout << countK << endl;
    }
    else 
    {
    	cout << max(k- (int)s.size(), countK) << endl;
    }

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}