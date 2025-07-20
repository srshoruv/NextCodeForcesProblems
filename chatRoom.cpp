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
    string s = "hello";
    string s1, s2 = "";

    cin >> s1;
    int j = 0;

    fr(i,0,s1.length())
    {
    	if (s[j]==s1[i] && j < s.length())
    	{
    		s2.push_back(s1[i]);
    		j++;
    	}
    }
    
    if (s2 == s)
    {
    	cout << "YES\n";
    }
    else
    {
    	cout << "NO\n";
    }

}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}