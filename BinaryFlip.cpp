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
    string s; cin >> s;

    int cntZ = 0, cntO = 0;

    fr(i,0,n-1)
    {
    	if (s[i] == '0' && s[i+1] == '0') 
		{
			cntZ++;
		}
    	else if (s[i] == '1' && s[i+1] == '1')
    	{
    		cntO++;
    	}
    }

    if (cntO >= cntZ)
    {
    	cout << 0 << endl;
    }
    else
    {
    	cout << ((cntZ - cntO) / 2) + ((cntZ - cntO) % 2 != 0) << endl;
    }


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}