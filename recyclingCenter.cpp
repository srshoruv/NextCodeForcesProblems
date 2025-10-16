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
    int n, c, coin = 0;
    cin >> n >> c;

    vi v;
    fr(i,0,n)
    {
        int x;
        cin >> x;

        if (x > c)
        {
            coin++;
        }
        else
        {
            v.push_back(x);
        }
    }

    sort(all(v));

    int j = 1;

    for(int i = v.size()-1; i >= 0; i--)
    {
        if (v[i] * j > c) coin++;
        else j *= 2;
    }

    cout << coin << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}