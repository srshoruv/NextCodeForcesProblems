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

    int countA = 0, countB = 0, countC = 0;

    while(n--)
    { 
    	int a,b,c;
    	cin >> a >> b >> c;

    	countA += a;
    	countB += b;
    	countC += c;
    	
    }

    if (countA || countB || countC) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}