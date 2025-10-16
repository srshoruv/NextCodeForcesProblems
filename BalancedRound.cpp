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
    int n,k;
    cin >> n >> k;

    in(v,n);
    sort(all(v));

    vi v1, v2;

    int len = 1;

    v1.push_back(0);

    fr(i,0,n-1)
    {
    	if (v[i+1] - v[i] > k)
    	{
    		v1.push_back(i+1); 		
    	}

    }
    v1.push_back(n);
    v1.push_back(n);

    fr(i,0,v1.size()-1)
    {
    	v2.push_back(v1[i+1]-v1[i]);
    }
   

    int m = n;

    m = *max_element(all(v2));

    


    // fr(i,0,v1.size())
    // {
    // 	if (m > v1[i]) m = v1[i];
    // }

    
    cout << n - m << endl;


 
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}