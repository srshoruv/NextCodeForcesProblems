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
	map<string, int> m;
	int n; cin >> n;
	string s;
	cin >> s;

    fr(i,0,n)
    {
    	fr(j,0,n)
    	{
    		if(s.substr(i,2) == s.substr(j,2))
    		{
    			m[s.substr(i,2)]++;

    		}
    	}
    }

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}