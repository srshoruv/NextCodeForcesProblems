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
    int n,m;
    cin >> n >> m;

    vector<vector<char>> v(n,vector<char> (m));

    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		cin >> v[i][j];
    	}
    }

    int rowFirst = 0, rowLast = 0;
    int colFirst = 0, colLast = 0;

    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		if (v[i][j]=='#')
    		{

    			if(!rowFirst)
    			{
    				rowFirst = i+1;
    			}

    			if(rowFirst)
    			{
    				rowLast = i+1;
    			}

    			if(!colFirst)
    			{
    				colFirst = j+1;
    			}
    			else
    			{
    				colFirst = min(colFirst,j+1);
    			}

    			if(!colLast)
    			{
    				colLast = j+1;
    			}
    			else
    			{
    				colLast = max(colLast,j+1);
    			}

    		}
    	}
    }

    cout << (rowLast+rowFirst) / 2 << " " << (colLast+colFirst) / 2 << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}