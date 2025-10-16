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
    int n,score = 0;
    cin >> n;

    unordered_map<int, int> m;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;
    	m[x]++;
    }

    vector<pair<int, int>> v;

    for (auto x : m)
    {
    	v.push_back(make_pair(x.second, x.first));
    }

    sort(all(v));

    int i = 1;

    set<int> sA, sB;

    for (auto x : v)
    {
    	while(x.first--)
    	{
    		if(i % 2)
    		{
    			sA.insert(x.second);
    		}
    		else
    		{
    			sB.insert(x.second);
    		}
    		i++;
    	}
    }

    for (auto x : sA)
    {
    	if (sB.find(x)==sB.end()) score++;
    }

    score += sA.size();

    cout << score << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}