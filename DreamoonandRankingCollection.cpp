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
    int n,x;
    cin >> n >> x;

    vi v(201,0);
    v[0] = 1;

    fr(i,0,n)
    {
    	int y;
    	cin >> y;

    	v[y]++;
    }

    fr(i,0,v.size())
    {
    	if(v[i]==0 && x <= 0)
    	{
    		cout << i-1 << endl;
    		return;
    	}
    	
    	if (v[i]==0 && x > 0)
    	{
    		x--;
    	}
    }

    cout << 200 << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}