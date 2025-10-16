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
    int n = 4;
    vi v(n);

    int count = 0;
    fr(i,0,n)
    {
    	cin >> v[i];
    	if (i != 0)
    	{
    		if (v[i] > v[0])
    		{
    			count++;
    		}
    	}
    }

    cout << count << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}