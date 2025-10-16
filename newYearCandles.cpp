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
    int a, b;
    cin>> a >> b;

    int s = a, d = 0;

    while (s > 0)
    {
    	d++;
        s--;

        if (d % b == 0) s++;
    }

    cout << d << endl;
}

int32_t main() 
{
    fastio;
	solve();

    return 0;
}