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

    int count = 0;

    map<int,int> m;

    vector<pair<int, int>> v;

    fr(i,0,n)
    {
        int x;
        cin >> x;
        if (x != 1) count++;
        m[x]++;
    }

    for(auto p: m)
    {
        v.push_back(make_pair(p.second,p.first));
    }

    sort(all(v));

    auto maxVal = v[v.size()-1].first;

    if (v[v.size()-1].first == n && v[v.size()-1].second != 1) cout << 1 << endl;
    else cout << n - maxVal<< endl;
    

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}