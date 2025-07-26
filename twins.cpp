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
    int ans = 0, sum = 0, count = 0;

    vi v;
    fr(i,0,n)
    {
    	int x;
    	cin >> x;
    	v.push_back(x);
    }

    sort(all(v));

    fr(i,0,n)
    {
    	sum += v[i];
    }


	fr(i,0,n)
	{
		ans += v[n-i-1];
		sum -= v[n-i-1];
		count++;

		if (ans > sum)
		{
			
			cout << count << endl;
			break;
		}
	}

    

}

int32_t main() 
{
    fastio;

  	solve();

    return 0;
}