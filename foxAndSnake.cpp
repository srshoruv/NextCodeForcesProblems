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
    int n,m;
    cin >> n >> m;

    fr(i,1,n+1)
    {
    	if (i % 2 ==1)
    	{
    		fr(j,1,m+1)
	    	{
	    		cout<<'#';
	    	}
	    	cout<<endl;
    	}
    	else
    	{
    		if ((i / 2) % 2 == 1)
    		{
    			fr(j,1,m)
	    	{
	    		cout<<'.';
	    	}
    			cout << '#';
    			cout << endl;
    		}
    		else
    		{
    			cout << '#';
    			fr(j,1,m)
	    		{
	    			cout<<'.';
	    		}
	    		cout << endl;	
    			
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