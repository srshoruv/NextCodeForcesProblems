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
    int n, k;
    cin >> n >> k;

    vi v;

    fr(i,0,n)
    {
    	v.push_back(i+1);
    }

    vi ans;

    int i = 0, j = n-1;
    int div = n / k;

    while(div--)
    {

    	fr(i,0,k-1)
    	{
    		ans.push_back(v[j]);
    		j--;
    	}
    	ans.push_back(v[i]);
    	i++;
    }

    int rem = n % k;

    while(rem--)
    {
    	ans.push_back(v[j--]);
    }

    fr(i,0,n)
    {
    	cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}