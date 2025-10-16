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
    int s,n;
    cin >> s >> n;

    vector<pair<int,int>> v;

    while(n--)
    {
    	int x, y;
    	cin >> x >> y;
    	
    	v.push_back(make_pair(x,y));
    }

    sort(all(v));

    fr(i, 0, v.size())
    {
    	if(v[i].first < s)
    	{
    		s += v[i].second;
    	}
    	else
    	{
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";

}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}