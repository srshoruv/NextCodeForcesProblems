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
    int odd = 0, even = 0;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;

    	if (x % 2 == 1) odd++;
    	else even++;
    }

    if (odd == 0) cout << "NO\n";
    else if (odd == n && n % 2 != 1) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}