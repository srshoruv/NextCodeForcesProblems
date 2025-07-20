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
    int n, d;
    cin >> n >> d;
    int sum = d;

    int fact = 1;

    fr(i, 1, n+1)
    {
    	fact *= i;
    }

    fact--;

    while (fact--)
    {
    	sum = (sum * 10) + d;
    }

    cout << sum;

    fr (i,1,10)
    {
    	if (i % 2 == 1)
    	{
    		if (sum % i == 0)
    		{
    			cout << i << " ";
    		}
    	}
    } 

    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}