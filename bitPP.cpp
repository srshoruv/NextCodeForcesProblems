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

int solve(int& ans)
{
    string s;
    cin >> s;

    if (s == "X++" || s == "++X")
    {
    	ans++;
    }
    else
    {
    	ans--;
    }

    return ans;
}

int32_t main() 
{
    fastio;

    int ans = 0;
    int tc;
    cin >> tc;

    while (tc--)
    {
    	solve(ans);
    }

    cout << ans << endl;
	

    return 0;
}