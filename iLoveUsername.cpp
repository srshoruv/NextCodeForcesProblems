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

    int count = 0;

    int minVal = v[0];
    int maxVal = v[0];

    fr(i,1,n)
    {
    	

    	if (v[i] > maxVal || v[i]<minVal)
    	{
    		count++;
    	}

    	minVal = min(minVal,v[i]);
    	maxVal = max(maxVal,v[i]);
    	
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}