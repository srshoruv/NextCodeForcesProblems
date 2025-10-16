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
    int n, sum = 0;
    cin >> n;

    fr(i,1,n+1)
    {
    	if (i % 2)
    	{
    		sum += i * i * i * - 1;
    	}
    	else
    	{
    		sum += i * i * i;
    	}
    }

    cout << sum << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}