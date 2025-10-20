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
    int n,a,b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int x = 0, y = 0, found = 0, i = 100, sum = 0;

    while(i--)
    {


    	fr(j,0,n)
    	{
    		

    		if (s[j]=='N')
	    	{
	    		y++;
	    	}
	    	else if (s[j]=='E')
	    	{
	    		x++;
	    	}
	    	else if (s[j]=='S')
	    	{
	    		y--;
	    	}
	    	else if (s[j]=='W')
	    	{
	    		x--;
	    	}
	    	if (x == a && y == b)
	    	{
	    		yes;
	    		return;
	    	}

    	}
    }

    no;

    

    

    // if (found) yes;
    // else no;

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}