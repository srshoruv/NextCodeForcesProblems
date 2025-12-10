#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n,k; cin >> n >> k;
    string s; cin >> s;

    vi visited(n,0);

    int zeros = 0, ones = 0;

    fr(i,0,n)
    {
    	if(s[i]=='1') ones++;
    	else zeros++;
    }


    vi ans(n);

    int pOne = 1;

    int rem = n;

    fr(i,0,n-k)
    {

    	if(!visited[i] && !visited[i+k])
    	{
    		ans[i] = 1;
    		ans[i+k] = 0;
    		ones--;
    		zeros--;

    		rem -= 2;

    		if ((ones <= 0 || zeros <= 0) && rem > 0)
    		{
    			pOne--;
    			break;
    		}

    		visited[i] = 1;
    		visited[i+k] = 1;
    	}
    	else if (visited[i] && !visited[i+k])
    	{
    		if (ans[i]==1)
    		{
    			ans[i+k] = 0;
    			visited[i+k] = 1;
    			zeros--;
    		}
    		else
    		{
    			ans[i+k] = 1;
    			visited[i+k] = 1;
    			ones--;
    		}

    		rem -= 1;

    		if ((ones <= 0 || zeros <= 0) && rem > 0)
    		{
    			pOne--;
    			break;
    		}
    	}
    	else
    	{
    		if(ans[i]==ans[i+k])
    		{
    			pOne--;
    			break;
    		}

    	}
    }

    if (!pOne)
    {
    	pOne = 1;
    	rem = n;

    	fr(i,0,n-k)
	    {

	    	if(!visited[i] && !visited[i+k])
	    	{
	    		ans[i] = 0;
	    		ans[i+k] = 1;
	    		ones--;
	    		zeros--;

	    		rem -= 2;

    		if ((ones <= 0 || zeros <= 0) && rem > 0)
    		{
    			pOne--;
    			break;
    		}

	    		visited[i] = 1;
	    		visited[i+k] = 1;
	    	}
	    	else if (visited[i] && !visited[i+k])
	    	{
	    		if (ans[i]==1)
	    		{
	    			ans[i+k] = 0;
	    			visited[i+k] = 1;
	    			zeros--;
	    		}
	    		else
	    		{
	    			ans[i+k] = 1;
	    			visited[i+k] = 1;
	    			ones--;
	    		}

	    		if (ones < 0 || zeros < 0)
	    		{
	    			pOne--;
	    			break;
	    		}
	    	}
	    	else
	    	{
	    		if(ans[i]==ans[i+k])
	    		{
	    			pOne--;
	    			break;
	    		}
	    	}
    	}
    }

    if(pOne) yes;
    else no;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}