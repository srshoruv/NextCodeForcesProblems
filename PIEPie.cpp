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

bool isPossible(vi &v, int f, int radi)
{
	int c = -1;

	fr(i,0,v.size())
	{
		if (v[i] >= radi) c++;

		if (c == f) break;
	}

	if (c == f) return true;
	else return false;

}

void solve()
{
    int n, f; cin >> n >> f;
    in(v,n);

    sort(all(v));

    int low = v[0], high = v[n-1];

    while (high - low > 1)
    {
    	int mid = (high + low) / 2;

    	if (isPossible(v,f,mid))
    	{
    		low = mid;
    	}
    	else
    	{
    		high = mid - 1;
    	}
    }

    if (isPossible(v,f,high)) cout << (high * high * 3.1416) / (f + 1)  << endl;
    else cout << (low * low * 3.1416) / (f + 1) << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}