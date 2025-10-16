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
    int n,m;
    cin >> n >> m;

    in(v,n);
    in(v1,m);

    sort(all(v1));

    fr(i,0,m)
    {
    	auto it = find(all(v),v1[i]);

    	if(it != v.end())
    	{
    		v.erase(it);
    	}
    }

    fr(i,0,v.size())
    {
    	cout << v[i] << " ";
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}