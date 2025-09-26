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
    in(v,3);
    sort(all(v));

    int x = 5;

    while (x--)
    {
        v[0]++;
        sort(all(v));
    }

    cout << v[0] * v[1] * v[2] << endl;
	

}

int32_t main() {
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}