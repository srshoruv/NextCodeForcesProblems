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
    int a,b;
    cin >> a >> b;

    int diff = abs(a-b);

    if (a < b && diff % 2 == 1) cout << 1 << endl;
    else if (a < b && diff % 2 == 0) cout << 2 << endl;
    else if ( a == b) cout << 0 << endl;
    else if (a > b && diff % 2 == 0) cout << 1 << endl;
    else if (a > b && diff % 2 == 1) cout << 2 << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}