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
    int m, n;
    cin >> m >> n;

    vector<int> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
    	if (isPrime[i])
    	{
    		for (int j = i * i; j <= n; j+=i)
    		{
    			isPrime[j] = 0;
    		}
    	}
    }

    fr(i, m, n+1)
    {
    	if(isPrime[i])
    	{
    		cout << i << endl;
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