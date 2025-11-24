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
    int n, k; cin>> n>>k;
    string s; cin >> s;

    

    while (k--)
    {

    	string temp = s;
    	bool change = 0;

	    fr(i,1,n-1)
    	{
    		if(s[i-1] == '1' && s[i+1] == '1')
    		{
    			if (s[i] == '0')
    				{
    					temp[i] = '1';
    				}
    			else temp[i] = '0';
    			change = 1;
    		}
    	}

    	s = temp;

    	if (!change) break;

	}

	cout << s << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}