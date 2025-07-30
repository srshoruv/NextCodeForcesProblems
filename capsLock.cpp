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

    string s1 = s;
    string sub = s.substr(1,s.length()-1);
    transform(sub.begin(), sub.end(), sub.begin(), 
[](unsigned char c){ return toupper(c); });

    string all = s;
    transform(all.begin(), all.end(), all.begin(), 
[](unsigned char c){ return toupper(c); });


    if (all == s)

    {
    	transform(all(s), s.begin(), ::tolower);
    	cout << s << endl;
    }
    else if ( sub == s.substr(1,s.length()-1))
    {
    	transform(all(s), s.begin(), ::tolower);
    	cout << char (s[0] - 32) << s.substr(1,s.length()-1) << endl;
    }
    else	
    {
    	cout << s << endl;
    }
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}