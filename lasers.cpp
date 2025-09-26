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
    int n,m,x,y, count = 0;
    cin >> n >> m >> x >> y;
    in(vy, n);
    in(vx, m);

    fr(i,0,n)
    {
    	if(vy[i] <= y) count++;
    }

    fr(i,0,m)
    {
    	if(vx[i] <= x) count++;
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}