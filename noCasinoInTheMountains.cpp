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
    int n , k;
    cin >> n >> k;

    in(v,n);
    int count = 0;

	
	fr(i,0,n-k+1)
	{
		int temp = 0;
		fr(j,i,i+k)
		{
			temp += v[j];
		}

		if(!temp) 
		{
			count++;
			i += k;
		}

	}

	cout << count << endl;

}


int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();
    return 0;

    return 0;
}