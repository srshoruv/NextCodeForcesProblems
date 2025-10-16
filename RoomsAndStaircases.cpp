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
    string s;
    cin >> s;

    if(s[0]=='1' || s[n-1]=='1') cout << n * 2 << endl;
    else
    {
    	int idx = 0;
    	fr(i,0,n)
    	{
    		if(s[i]=='1') 
    		{
    			idx = max(idx, max(i+1,n-i));
    		}
    	}

    	if (s.find('1')==string::npos)
    	{
    		cout << n << endl;
    		return;
    	}

    	cout << (idx) * 2 << endl;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}