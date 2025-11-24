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
    int n, sum = 0; cin >> n;

    in(v,n);

    if (v[0]==-1) v[0] = v[n-1];

    if (v[n-1]==-1) v[n-1] = v[0];


    fr(i,0,n)
    {
    	if (v[i]==-1)
		{
			v[i] = 0;
		}
    }


 

    cout << abs(v[0]-v[n-1]) << endl;

    for(auto it : v) cout << it << " ";

    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}