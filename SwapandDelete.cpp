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
    string s; cin >> s;
    string temp = s;

    int ones = 0, zeros = 0;

    fr(i,0,s.size())
    {
    	if (s[i]=='1')
    	{
    		ones++;	
    	}
    	else
    	{
    		zeros++;
    	}
    }

    fr(i,0,s.size())
    {
    	if (s[i]=='1')
    	{
    		zeros--;
    	}
    	else
    	{
    		ones--;
    	}

    	if (ones < 0 || zeros < 0)
    	{
    		cout << s.size() - i << endl;
    		return;
    	}
    }

    cout << 0 << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}