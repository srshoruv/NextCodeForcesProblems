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

	cout << 2 << endl;

	fr(i,1,n+1)
	{
		cout << i;

		if (i==n) cout << endl;
		else cout << " ";
	}

	for(int i = n; i >= 1; i--)
	{
		cout << i;

		if (i==1) cout << endl;
		else cout << " ";
	}
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}