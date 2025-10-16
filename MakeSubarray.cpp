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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first = -1, last = -1;

    fr(i,0,n)
    {
    	if(s[i]=='1')
    	{
    		first = i;
    		break;
    	}
    }

    for(int i = n-1; i >= 0; i--)
    {
    	if(s[i]=='1')
    	{
    		last = i;
    		break;
    	}
    }

    if(first == -1 && last == -1)
    {
    	cout << 0 << endl;
    }
    else
    {
    	int dis = last - first-1;

    	fr(i, first+1, last)
    	{
    		if(s[i]=='1') dis--;
    	}

    	if (dis < 0) dis = 0;

    	cout << dis << endl;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}