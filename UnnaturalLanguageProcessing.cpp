#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    string ans = "";

    vi v;

    int count = 0;

    fr(i,0,n)
    {
    	if(s[i]=='a' || s[i]=='e') v.push_back(0);
    	else v.push_back(-1);
    }

    fr(i,0,n-2)
    {
    	ans.push_back(s[i]);
    	if(v[i]==0 && v[i+1] + v[i+2]==-2)
    	{
    		ans.push_back(s[i+1]);
    		ans.push_back('.');
    		i++;
    	}

    	else if (v[i]==0 && v[i+1] + v[i+2]!=-2)
    	{
    		ans.push_back('.');
    	}
    }

    ans.push_back(s[n-2]);
    ans.push_back(s[n-1]);

    cout << ans << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}