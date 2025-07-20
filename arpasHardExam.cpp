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

    int num = 8;

    int res = 1;

    while (n > 0)
    {
    	if (n % 2 == 1)
    	{
    		res = (res * num) % 10;
    	}

    	num = (num * num) % 10;
    	n /= 2;
    }

    cout << res;


}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}