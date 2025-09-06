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
    int n, k;
    cin >> n >> k;

    in(v,n);

    int minSum = 100;
    int idx = 0;

    fr(i,0,n-k)
    {
    	int tempSum = 0;
    	fr(j, i, i+k)
    	{
    		tempSum+=v[j];
    	}

    	minSum = min(minSum,tempSum);

    	if (minSum == tempSum)
    	{
    		idx = i;
    	}

    	if (minSum == 1) break;
    }

    cout << idx+1 << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}