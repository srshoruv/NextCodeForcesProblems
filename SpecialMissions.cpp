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
    int n, c; cin >> n >> c;
    in(v,n);
    string s; cin >> s;

    vector<pair<int, int>> vp;

    fr(i,0,n)
    {
    	if(s[i]=='1')
    	{
    		vp.push_back(make_pair(1,v[i]));
    	}
    	else
    	{
    		vp.push_back(make_pair(0,v[i]));
    	}
    }

    // sort(all(vp));

    int afterSpecial = 0;
    int sum = 0;

    for(auto x : vp)
    {
    	if(x.first==1)
    	{
    		afterSpecial += x.second;
    	}
    	else if (x.first == 0)
    	{
    		sum += x.second;
    	}
    }

    if (sum >= c)
    {
    	cout << max(sum, sum+afterSpecial-c) << endl;
    }
    else
    {
    	cout << sum << endl;
    }

    


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}