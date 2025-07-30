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
    int n, c;
    cin >> n >> c;

    in(v,n);

    sort(all(v));

    int idx;

    fr(i,0,n)
    {
    	if(v[i] > c)
    	{
    		idx = i;
    		break;
    	}
    }

    int mult = 1;
    int temp = idx;
    int coin = 0;
    int prev = 0;
    --temp;

    while(temp >= 0)
    {
    	if (v[temp] * mult > c)
    	{
    		prev++;
    	}
    	else
    	{
    		mult *= 2;
    	}

    	temp--;
    }

    coin += (n-idx+prev);

    cout << coin << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}