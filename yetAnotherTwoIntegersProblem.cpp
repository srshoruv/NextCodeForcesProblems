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
    int a,b;
    cin >> a >> b;

    int diff = abs(b - a);
    int count = 0;

  
	int i = 10;
	int temp = diff;
	
	while(temp)
	{
		if (temp / i)
		{
			int div = temp / i;
			temp = temp % i;
			count += div;
		}
		else
		{
			i--;
		}
	}

	cout << count << endl;
}
    


int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}