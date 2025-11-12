#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    int Cz = 0, Co = 0;
    int lastIdx = 0, firstIdx = 0;

    int start = 0, end = 0;

    string s;
    cin >> s;

    fr(i,0,n)
    {

    	if (s[i] == '1')
    	{
    		Co++;
    	}
    	else Cz++;

    }

    // cout << Cz << " - " << Co << endl;


    fr(i,0,n-1)
    {
    	if ((s[i]=='0' && s[i+1]=='0'))
    	{
    		lastIdx++;
    	}
    	
    }

    Cz -= lastIdx;

    if (Cz < Co) yes;
    else
    {
    	// cout << s << endl;
       	no;
    }

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}