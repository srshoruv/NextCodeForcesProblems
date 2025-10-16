#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    string x,y;
    cin >> x >> y;

    vector<string> v = {"Ocelot", "Serval", "Lynx"};

    auto itx = find(all(v), x);
    auto ity = find(all(v),y);

    if (itx >= ity) yes;
    else no;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}