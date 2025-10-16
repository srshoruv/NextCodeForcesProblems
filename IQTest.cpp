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

    in(v,n);

    int oddCount = 0, evenCount = 0;

    fr(i,0,3)
    {
    	if(v[i] % 2 == 1)
    	{
    		oddCount++;
    	}
    	else evenCount++;
    }

    if (oddCount > evenCount)
    {
    	fr(i,0,n)
    	{
    		if(v[i]%2==0)
    		{
    			cout << i+1 << endl;
    			break;
    		}
    	}
    }
    else
    {
    	fr(i,0,n)
    	{
    		if(v[i]%2==1)
    		{
    			cout << i+1 << endl;
    			break;
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