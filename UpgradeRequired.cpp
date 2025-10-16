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
    int n,q;
    cin >> n >> q;

    vi v;

    fr(i,1,n+1) v.push_back(i);

    while (q--)
    {
    	int x,y;
    	cin >> x >> y;

    	int count = 0;

    	sort(all(v));

    	if (x < v[0]) cout << 0 << endl;
    	else if (x >= v[n-1]) cout << n << endl;
    	else
    	{
    		fr(i,0,n)
	    	{
	    		if (v[i] <= x)
	    		{
	    			count++;
	    			v[i] = y;
	    		}

	    		if (v[i+1] > x) break;
	    	}

    		cout << count << endl;
    	}

    	
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}