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
    int x;
    cin >> x;

    string s;
    cin >> s;

    int ant =  0, da = 0;

    fr(i,0,x)
    {
    	if (s[i]=='A')
    	{
    		ant++;
    	}
    	else
    	{
    		da++;
    	}
    }

    if (ant > da)
    {
    	cout << "Anton\n";
    }
    else if (ant < da)
    {
    	cout << "Danik\n";
    }
    else
    {
    	cout << "Friendship\n";
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}