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
    int x;
    cin >> x;
    vi v;

    while (x)
    {
    	v.push_back(x%10);
    	x /= 10;
    }

    cout << *min_element(all(v)) << endl;
    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();
    return 0;

    return 0;
}