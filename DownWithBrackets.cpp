#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;

    int count = 0, o = 0, c = 0;

    {
        if (count)
        {
            if(s[i]=='(') o++;
            else c++;
        }
        
    	if (s[i]==')' && s[i+1] == '(') 
		{
			count++;
		}

		
    }


    if (count && o >= 1 && o == c) yes;
    else no;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}