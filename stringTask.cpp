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
    string s;
    cin >> s;

    transform(all(s),s.begin(), ::tolower);

    string s2 = "";

    fr(i,0,s.length())
    {
    	if((s[i]!= 'a' )&& (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u') && (s[i] != 'y'))
    	{
    		s2.push_back('.');
    		s2.push_back(s[i]);
    	}
    }

    cout << s2 << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}
