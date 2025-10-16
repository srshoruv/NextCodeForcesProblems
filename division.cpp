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

    if (n <= 1399)
    {
    	cout << "Division 4\n";
    }
    else if ( n <= 1599)
    {
    	cout << "Division 3\n";
    }
    else if (n <= 1899)
    {
    	cout << "Division 2\n";
    }
    else
    {
    	cout << "Division 1\n";
    }

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}