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

    int ones = 0, twos = 0;
    int sum = 0;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;
    	if (x == 1) ones++;
    	else twos++;

    	sum += x;
    }


    if (sum % 2 != 0) cout << "NO\n";
    else 
    {
    	if (!ones && n%2 == 0) cout << "YES\n";
    	else if (ones >= 2) cout << "YES\n";
    	else cout << "NO\n";
    }


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}