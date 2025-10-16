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

    int m;
    cin >> m;
    string a,b;
    cin >> a >> b;

    fr(i,0,m)
    {
    	if(b[i]=='V')
    	{
    		string temp = a[i]+s;
    		s = temp;
    	}
    	else
    	{
    		s.push_back(a[i]);
    	}
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