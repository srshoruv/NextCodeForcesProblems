#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'

typedef vector<int> vi;

void solve()
{
    string s; cin >> s;

    bool found = false;

    vector<string> vs;
    fr(i,0,5)
    {
    	string temp;
    	cin >> temp;

    	if (temp.find(s[0]) != string::npos || temp.find(s[1]) != string::npos)
    	{
    		found = true;
    	}
    }

    if (found) yes;
    else no;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}