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
    int n,k; cin >> n >> k;
    string s; cin >> s;

    if (s[0]=='I')
    {
		int found = 1;

    	fr(i,1,n)
    	{
    		if(s[i]!='I')
    		{
    			s[0] = s[i];
    			found = 0;
    			break;
    		}
    	}

    	if (found) s[0] = 'A';
    }

    fr(i,1,n)
    {
    	if(s[i]=='I')
    	{
    		s[i] = s[i-1];
    	}
    }
	

    if (s[0]=='I') s[0] = s[n-1];

    int count = 0;

    fr(i,0,n-1)
    {
    	if(s[i]==s[i+1]) count++;
    }

    if (s[0]==s[n-1]) cout << count * k + (k-1) << endl;
    else cout << count * k << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}