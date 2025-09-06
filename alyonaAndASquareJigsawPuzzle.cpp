// #include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    in(v,n);

    int res = 1;

    int sum = 0;

    vi v1;

    int k = 0;

    v1.push_back(8);

    for(int i = 4; i < 15; i++)
    {
    	v1.push_back(v1[k] + pow(2,i));
    	k++;
    }

    // for(int i = 0; i < v1.size(); i++)
    // {
    // 	cout << v1[i] << " ";
    // }

    fr(i,1,n)
    {
    	sum += v[i];

    	auto it = find(all(v1), sum);

    	if(it != v1.end()) 
    	{
    		res++;
            sum = 0;
    	}
    		 

    }

    cout << res << endl;

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}