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
    int n,q;

    cin >> n >> q;

    in(v,n);

    while(q--)
    {

    	// fr(i,0,n) cout << v[i] << " ";
    	// cout << endl;
    	int x;
    	cin >> x;

    	if(x==2)
    	{
    		int a, b, sum = 0;
    		cin >> a >> b;

    		fr(i,a-1,b)
    		{
    			sum += v[i];
    		}

    		cout << sum << endl;
    	}
    	else if (x==1)
    	{
    		int a;
    		cin >> a;
    		fr(i,0,a)
    		{
    			v.push_back(v[0]);
    			v.erase(v.begin());
    		}
    	}
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}