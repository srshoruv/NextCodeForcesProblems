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
    int count = 0;
    string s = "";

    vi v(n);


    fr(i,0,n)
    {
    	cin >> v[i];
    	if (v[i]==0) count++;
    }

	vector<pair<int, char>> p;

    fr(i,0,count)
    {
    	p.push_back(make_pair(0,'a'+i));
    }

    fr(i,0,n)
    {
    	int x = v[i];

    	for(auto& it : p)
    	{
    		if(it.first == x)
    		{
    			s.push_back(it.second);
    			it.first += 1;
    			break;
    		}
    	}
    	
    }

    cout << s << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}