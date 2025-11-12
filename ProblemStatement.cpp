#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int x;
    cin >> x;

    int n;
    cin >> n;

    in(v,n);

    vi v1(n,-1);

    int q;
    cin >> q;

    while(q--)
    {
    	int p;
    	cin >> p;

    	if (v1[p-1] == -1)
    	{
    		x += v[p-1];
    		v1[p-1] = 0;
    	}
    	else
    	{
    		x -= v[p-1];
    		v1[p-1] = -1;
    	}

    	cout << x << endl;
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}