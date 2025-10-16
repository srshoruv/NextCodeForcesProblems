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
    string s;
    cin >> s;

    int last, count = 0;

    for(int i=s.length()-1; i >= 0; i--)
    {
    	if(s[i] != '0')
    	{
    		last = i;
    		break;
    	}
    }

    for(int i=0; i < last; i++)
    {
    	if(s[i] != '0')
    	{
    		count++;
    	}
    }

    // if (last != s.size() - 1) 
    	count += (s.size() - last-1);
    
    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}