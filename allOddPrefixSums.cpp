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
    int n, oddCount = 0, evenCount = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
    	int x;
    	cin >> x;

    	if (x%2==0) evenCount++;
    	else oddCount++;
    }

    if (oddCount == 1 && evenCount == 0) cout << "Yes\n";
    else if (oddCount == 1 && evenCount) cout << "Yes\n";     
    else cout << "No\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}