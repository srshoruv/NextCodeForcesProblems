#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;

    in(v,n);
    in(v1,m);

    sort(all(v));
    sort(all(v1));

    int temp = 0;

    fr(i,0,k)
    {
    	if (v[i] > v1[m-k+i])
    	{
    		no;
    		return;
    	}
    }

    yes;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}