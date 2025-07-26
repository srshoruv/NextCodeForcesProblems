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
    string s,s1;
    cin >> s;
    s1 = "HQ9+";

    bool found = false;

    fr(i,0,s.length())
    {
    	if (s1.find(s[i]) != string::npos)
    	{
    		found = true;
    		break;
    	}
    }

    if (found)
    {
    	cout << "YES\n";
    }
    else
    {
    	cout << "NO\n";
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}