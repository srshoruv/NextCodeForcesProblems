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
    int w,b;
    cin >> w >> b;

    vi v;

    v.push_back(1);

    fr(i,1,1000000)
    {
    	v.push_back(v[i-1]+(i+1));
    }
    

    fr(i,0,v.size())
    {
    	if(v[i]==(w+b))
    	{
    		cout << i + 1 << endl;
    		return;
    	}

    	else if (v[i] > (w+b))
    	{
    		cout << i << endl;
    		return;
    	}
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}