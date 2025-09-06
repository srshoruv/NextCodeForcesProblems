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
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;
    	v.push_back(make_pair(x,i+1));
    }

    sort(all(v));

    int count = 0;

    for (auto i:v)
    {

    	if (k>=i.first)
    	{
    		k -= i.first;
    		count++;
    	}	
    }
	cout << count << endl;

    int temp = 0;
    for(auto i:v)
    {
    	if(temp == count || count == 0) break;

    	cout << i.second << " ";
    	temp++;
    }

    
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}