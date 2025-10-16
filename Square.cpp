#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    vi v1, v2;

    fr(i,0,4)
    {
        int a, b;

        cin >> a >> b;

        v1.push_back(a);
    }

    if (v1[0]!=v1[1]) cout << (v1[0]-v1[1]) * (v1[0]-v1[1]) << endl;
    else cout << (v1[0]-v1[2])*(v1[0]-v1[2]) << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}