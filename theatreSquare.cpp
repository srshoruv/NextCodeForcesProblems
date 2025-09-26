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
    int m,n,x;
    cin >> m >> n >> x;

    int l = 0, k = 0;

    if ( m % x != 0) l = (m / x) + 1;
    else l = m / x;

    if ( n % x != 0) k = (n / x) + 1;
    else k = (n / x);

    cout << l * k << endl;
}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}