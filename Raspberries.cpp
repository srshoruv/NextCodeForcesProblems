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
    in(v,n);

    int best = 10;

    if (k == 4)
   	{

   		int count = 0;
   		fr(i,0,n)
	   	{
	   		if (v[i] % k == 0)
	   		{
	   			cout << 0 << endl;
	   			return;
	   		}
	   		
	   		if (v[i] % 2 == 0)
	   		{
	   			count++;
	   		}
	   		else if (v[i] % 4 == 0)
	   		{
	   			count += 2;
	   		}
	   	}

	   	if (count >= 2)
	   	{
	   		cout << 0 << endl;
	   		return;
	   	}
	   	else if (count == 1)
	   	{
	   		cout << 1 << endl;
	   		return;
	   	}
	   	else
	   	{
	   		best = 2;
	   	}
   	}

   		fr(i,0,n)
	   	{
	   		
	   		if (v[i] % k == 0)
	   		{
	   			cout << 0 << endl;
	   			return;
	   		}
	   		else
	   		{
	   			best = min(best, k - v[i] % k);
	   		}
	   	}
   	
   	
   	cout << best << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}