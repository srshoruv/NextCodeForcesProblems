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
    int n; cin >> n;
    in(v,n);

    int sum = 0, count = 0;

    fr(i,0,n)
    {
    	sum += v[i];
    }

    fr(i,0,n)
    {
    	if (v[i] != 0) count++;
    }


    int temp = (sum - n) + 1;

    cout << min(temp,count) << endl;

    // fr(i,0,count)
    // {
    // 	if (maxVal - v[i] >= temp)
    // 	{
    // 		cout << count - i << endl;
    // 		return;
    // 	}
    // }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}