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
    int n;
    cin >> n;

    in(v,n);
    string s;
    cin >> s;

    if (s[0]=='1' || s[n-1] == '1')
    {
    	cout << -1 << endl;
    	return;
    }
    else
    {
    	int startIdx = 0, endIdx = 0;
    	fr(i,0,n)
    	{
    		if(v[i]==1)
    		{
    			startIdx = i + 1;
    		}
    		else if (v[i]==n)
    		{
    			endIdx = i + 1;
    		}
    	}

    	int temp = min(startIdx,endIdx);
    	endIdx = max(startIdx,endIdx);
    	startIdx = temp;

    	fr(i,0,n)
    	{
    		if (s[i]=='1' && (i < startIdx))
    		{
    			cout << -1 << endl;
    			return;
    		}
    	}

    	cout << 1 << endl;
    	cout << startIdx << " " << endIdx << endl;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}