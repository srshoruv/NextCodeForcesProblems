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

    fr(i,0,n)
    {
    	int cnt = 0;
    	for(int j = 1; j * j <= v[i]; j++)
    	{
    		if (v[i]%j==0)
    		{
    			cnt++;
    		}
    	}

    	if (cnt == 3)
    	{
    		cout << "YES\n";
    	}
    	else
    	{
    		cout << cnt;
    		cout << "NO\n";
    	}
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}

