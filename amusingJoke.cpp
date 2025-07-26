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
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    string s = s1+s2;

    int n = s.length();

    while(n--)
    {
    	if(s3.find(s[n]) != string::npos)
    	{
    		s3.erase(s3.find(s[n]),1);
    		s.erase(n,1);
    	}
    }

    if (s.length() >= 1|| s3.length() >= 1)
    {
    	cout << "NO\n";
    }
    else
    {
    	cout << "YES\n";
    }

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}