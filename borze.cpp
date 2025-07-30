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
    string s;
    cin >> s;

    fr(i,0, s.length())
    {
    	if (s[i]=='.')
    	{
    		cout << '0';
    	}
    	else if (s[i]=='-' && s[i+1] =='.')
    	{
    		cout << '1';
    		i++;
    	}
    	else
    	{
    		cout << '2';
    		i++;
    	}
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}