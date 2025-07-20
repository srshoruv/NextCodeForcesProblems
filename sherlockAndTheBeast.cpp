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
    int n;
    cin >> n;

    if (n < 3)
    {
    	cout << -1 << endl;
    }
    else if (n % 3 == 0 || n % 5 == 0)
    {
    	
    	
    		if (n % 3 == 0)
    		{
    			while(n--)
    			{
    				cout<<5;
    			} 
    			cout << endl;   		
    		}
    		else
    		{
    			while(n--)
    			{
    				cout<<3;
    			}
    			cout << endl;
    		}
    }
    else if ((n % 8 == 5) || (n % 8) == 3)
    {
    	int x = n / 8;
    	int rem = n % 8;

    	if (rem == 3)
    	{
    		fr(i,0,3)
    		{
    			cout << 5;
    		}
    	}

    	while (x--)
    	{
    		fr(i,0,3)
    		{
    			cout<<5;
    		}

    		fr(i,0,5)
    		{
    			cout<<3;
    		}

    	}

    	
    	if (rem == 5)
    	{
    		fr(i,0,5)
    		{
    			cout << 3;
    		}
    	}

    	cout << endl;
    }
    else
    {
    	cout << -1 << endl;;
    }
    	

	
    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();
    return 0;

    return 0;
}