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

    size_t pos = s.find("WUB");

    while ( pos != string::npos)
    {
    	s.replace(pos,3," ");
    	pos = s.find("WUB");
    }

	fr(i,0,s.length())
	{
		if(s[i]==' ' && s[i+1] == ' ')
		{
			s.erase(i,1);
		}
	}

	if (s[0]==' ')
	{
		s.erase(0,1);
	}
	if (s[s.length()-1]==' ')
	{
		s.erase(s.length()-1,1);
	}

    cout << s << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}