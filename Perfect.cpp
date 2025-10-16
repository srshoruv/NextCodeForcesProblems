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
    int n,m,k;
    cin >> n >> m >> k;

    vector<set<int>> s(11);
    vi v;

    while(k--)
    {
    	int a,b;
    	cin >> a >> b;

    	s[a].insert(b);

    	if((int)s[a].size() >= m) v.push_back(a);
    }

    fr(i,0,(int)v.size())
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