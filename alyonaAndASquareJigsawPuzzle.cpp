#include "bits/stdc++.h"
// #include <bits/stdc++.h>
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

    in(v,n);

    int res = 0;

    int sum = 0;

    vi v1;

    fr(i,1,100)
    {
        if (i % 2) v1.push_back(i*i);
    }

    int temp = 0;

    fr(i,0,n)
    {

        temp += v[i];

        if (find(all(v1),temp) != v1.end())
        {
            res++;
        }

    }

    cout << res << endl;

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}