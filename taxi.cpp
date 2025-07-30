#include "bits/stdc++.h"
//#include <bits/stdc++.h>
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

    int count  = 0;

    sort(all(v));

    int i = n-1, j = 0;

    while(i >= j)
    {
    	if(v[i]==4)
    	{
    		count++;
    	}
    	else if (v[i]+v[j] <= 4)
    	{
    		count++;
    		j++;
    	}
    	else if (v[i]+v[j] > 4)
    	{
    		count++;
    	}
    	else
    	{
    		count++;
    		j++;
    	}
    	i--;
    }

    cout << count << endl;

    

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}