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

    int count = 0;

    while (n)
    {
    	if (n >= 100)
    	{
    		count += n / 100;
    		n %= 100;
    	}
    	else if ( n >= 20)
    	{
    		count += n / 20;
    		n %= 20;
    	}
    	else if ( n >= 10)
    	{
    		count += n / 10;
    		n %= 10;
    	}
    	else if ( n >= 5)
    	{
    		count += n / 5;
    		n %= 5;
    	}
    	else
    	{
    		count += n;
    		n = 0;
    	}
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}