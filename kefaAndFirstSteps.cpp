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

    int length = 1;
    int temp = 1;

    fr(i,0,n)
    {
    	if(v[i] <= v[i+1])
    	{
    		temp++;
    	}
    	else
    	{
    		length = max(length,temp);
    		temp = 1;
    	}
    }

    cout << length;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}