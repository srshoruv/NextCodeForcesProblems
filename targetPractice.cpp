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

	int count = 0;
	int n = 10;

	vi v(n,0);

    fr(i,0,n)
    {
    	fr(j,0,n)
    	{
    		char inp;
    		cin >> inp;
    		if (inp == 'X')
    		{
    			if (j == i || n-j-1 == i)
    			{
    				v[i]++;
    				// cout << n-j-1 << " ";
    			}
    			// else
    			// {
    			// 	// count += j + 1;
    			// 	// // cout << j << " ";
    			// }
    			
    			
    		}
    		
    	}
    }

    fr(i,0,n)
    {
    	count += v[i] * (i+1);
    }

    cout << count << endl;



    // cout << count << endl;

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}