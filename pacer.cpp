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
    int n, m, count = 0;
    cin >> n >> m;

    vi v1;
    vi v2;

    v1.push_back(0);
    v2.push_back(0);

    

    fr(i,0,n)
    {
    	int a,b;
    	cin >> a >> b;

    	v1.push_back(a);
    	v2.push_back(b);
    }

    fr(i,0,v1.size()-1)
    {

    	int x = v1[i+1]-v1[i];
    	int y = abs(v2[i+1]-v2[i]);

    	if (x % 2 == y % 2)
    	{
    		count += x;
    	}
    	else
    	{
    		count += x-1;
    	}
    }

    count += m - v1[n];

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--)
    {
    	
    	solve();
    }

    

    return 0;
}