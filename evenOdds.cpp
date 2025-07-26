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

    vi odd;
    vi even;

    fr(i,1,n+1)
    {
    	if(i%2 == 1)
    	{
    		odd.push_back(i);
    	}
    	else
    	{
    		even.push_back(i);
    	}
    }

    int mid = n / 2;
    if (n%2 == 1)
    {
    	mid++;
    }

    if (k > mid)
    {
    	cout << even[k-mid-1] << endl;
    }
    else
    {
    	cout << odd[k-1] << endl;
    }

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}