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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    if ( k == 1 || l == 1 || m == 1 || n == 1) cout << d << endl;

    else
    {
    	int count = 0;

	    fr(i,1,d+1)
	    {
	    	if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
	    		count++;
	    }

    	cout << count << endl;
	}

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}