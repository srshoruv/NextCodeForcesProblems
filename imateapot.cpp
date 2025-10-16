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
    string s;
    cin >> s;

    if (s[n-1] == 'a' && s[n-2] == 'e' && s[n-3] == 't') cout << "Yes\n";
    else cout << "No\n";

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}