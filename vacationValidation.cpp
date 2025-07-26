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
    int n,l,r;
    string s;
    cin >> n >> l >> r >> s;

    bool found = false;

    fr(i,l-1,r)
    {
    	if(s[i]=='x')
    	{
    		found = true;
    		break;
    	}
    }

    if (found) cout << "No\n";
   	else cout << "Yes\n";


}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}