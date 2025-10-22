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
    int n;
    cin >> n;

    vector<pair<int,int>> v;

    for(int i = 1; i<=n; i++)
    {
    	int g = gcd(n,i);
    	
    	v.push_back(make_pair(gcd(g,n),i));	
    }

    // sort(rall(v));
    // // sort(rall(v));

    fr(i,0,n-1)
    {
    	fr(j,0,n-1)
    	{
    		if (v[j].first < v[j+1].first)
    		{
    			swap(v[j],v[j+1]);
    		}
    	}
    }


    for (auto it : v)
    {
    	cout << it.second << " ";
    }
    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}