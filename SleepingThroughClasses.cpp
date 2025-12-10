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
    int n, k; cin >> n >> k;

    string s; cin >> s;

    int count = 0, countOne =0;

    string temp = s;

    fr(i,0,n)
    {
    	if(s[i]=='1')
    	{
    		fr(j,0,k)
    		{
    			if (i+j+1 >= n) break;
    			temp[i+j+1] = '1';
    		}
    	}
    }

    fr(i,0,n)
    {
    	if (temp[i]=='0')
    	{
    		count++;
    	}
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}