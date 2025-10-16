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

    vi v;

    int count = 0;
    int i = 0;

    while(n)
    {
    	int x = i;
    	int lastDig = n % 10;
    	if (lastDig != 0) 
		{
			count++;
			int temp = lastDig;
			while(x--)
			{
				temp *= 10;
			}
			v.push_back(temp);
		}
		n /= 10;
		i++;
		

    }

    cout << count << endl;

    fr(i,0,v.size())
    {
    	cout << v[i] << " ";
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