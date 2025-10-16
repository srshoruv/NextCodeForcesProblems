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
    int n,d;
    cin >> n >> d;

    in(v,n);

    vi v1;

    fr(i,d,n)
    {
    	v1.push_back(v[i]);
    }
    fr(i,0,d)
    {
    	v1.push_back(v[i]);
    }

    fr(i,0,n)
    {
    	cout << v1[i] << " ";
    }
}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}