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

    vector<vector<int>> v (n, vector<int> (n));

    int x = 1;

    fr(i,0,n)
    {
    	fr(j,0,n)
    	{
    		v[i][j] = x++;
    	}
    }

    if (n == 1) cout << 1 << endl;
    if (n==2) cout << 9 << endl;
    else if (n > 2 && n < 5)
    {
    	int sum = v[n-1][n-1] + v[n-1][n-2] + v[n-1][n-3] + v[n-2][n-2];
    	cout << sum << endl;
    }
    else if (n >= 5)
    {
    	int sum = v[n-1][n-2] + v[n-2][n-2] + v[n-2][n-1] + v[n-2][n-3] + v[n-3][n-2];
    	cout << sum << endl;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}