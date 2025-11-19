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
    int n,x;
    cin >> n >> x;

    int higher = 0, lower = 0, equal = 0;
    vi v(n);

    fr(i,0,n)
    {
    	cin >> v[i];
    	if (v[i] > x) higher++;
    	else if (v[i] < x) lower++;
    	else equal++;
    }

    if (!higher || !lower) yes;
    else if (equal) yes;
    else no;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}