#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n, minCount = 0;
    cin >> n;

    in(v,n);

    set<int> s;

    fr(i,0,n)
    {
    	if (v[i]==-1) minCount++;
    		
    	s.insert(v[i]);
    }

    if(minCount)
    {
    	if ((minCount + (int) s.size()-1) == n)
    	{
    		yes;

    		for(int i = 0; i < n; i++)
    		{
    			if (v[i]==-1)
    			{
    				for(int j = n; j > 0; j--)
    				{
    					if(find(all(v),j) == v.end())
    					{
    						v[i] = j;
    						break;
    					}
    				}
    			}
    		}

    		fr(i,0,n) cout << v[i] << " ";
    	}
    	else no;
    }
    else if ((int)s.size()==n)
    	{
    		yes;
    		fr(i,0,n) cout << v[i] << " ";
    	}
    else no;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}