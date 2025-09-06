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
    int n, x;
    cin >> n >> x;
    string s, s1;
    cin >> s;

    s1 = s;

    

    while (x--)
    {
    	fr(z,0,s.length())
    	{
    		
	    	if (s[z] < s[z+1])
	    	{
	    		swap(s1[z], s1[z+1]);
	    	}


    	}

        s = s1;
    	
    }

    cout << s1 << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}