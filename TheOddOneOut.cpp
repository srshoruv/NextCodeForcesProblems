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
    string s;
    cin >> s;

    map<char, int> m;

    fr(i,0,(int)s.size())
    {
    	m[s[i]]++;
    }

    for (auto it : m)
    {
    	if (it.second == 1) cout << it.first;
    	// break;
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}