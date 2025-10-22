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

    int ones = 0, zeros = 0;
    string s;
    cin >> s;

    fr(i,0,n)
    {
    	if(s[i]=='0') zeros++;
    	else ones++;
    }

    int i = 1;

    while(!ones || !zeros)
    {
    	if ((zeros % 2 == 1 && ones % 2 == 0) || (ones % 2 == 1 && zeros == 0))
    	{
    		cout << "Alice" << endl;
    		return;
    	}
    	
    }

    cout << "Bob\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}