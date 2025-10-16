#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    fr(i,0,n)
    {
    	int x;
    	cin >> x;

    	v[i] = abs(x);
    }

    int temp = v[0];

    sort(all(v));

    int pos = find(all(v), temp) - v.begin();

	if (pos <= n/2) yes;
	// else if (n % 2 == 0 && temp == v[n/2+1]) yes;
    else no;

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}