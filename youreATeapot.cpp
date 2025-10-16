#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(auto i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;

    int start = -1, end = -1;


    for(auto i = 0; i < s.length(); i++)
    {
    	if(s[i]=='t')
    	{
    		start = i;
    		break;
    	}
    }

    for(auto i = s.length()-1; i >= 0; i--)
    {
    	if(s[i]=='t')
    	{
    		end = i;
    		break;
    	}
    }

    if (start == -1 || start == end)
    {
    	float ans = (float) (2 - 2) / (3 - 2);

    	cout << ans << endl;
    	return;
    }

    string subS;
    int count = 0;

    fr(i,start,end+1)
    {
    	if(s[i]=='t') count++;
    	subS.push_back(s[i]);
    }

    float ans = (float) (count - 2) / (subS.length() - 2);

    cout << ans << endl;

    // cout << "Start: " << start << " End: " << end << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}