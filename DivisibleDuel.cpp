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
    int x,y, even = 0, odd = 0;
    cin >> x >> y;

    fr(i,x,y+1)
    {
    	if (i % x == 0)
    	{
    		if(i % 2) odd++;
    		else even++;
    	}
    	
    }

    if (even >= odd) yes;
    else no;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}