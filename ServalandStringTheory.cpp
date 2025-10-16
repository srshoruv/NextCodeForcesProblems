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
    int n,k, diff = -1;
    cin >> n >> k;

    string s, s1;
    cin >> s;

    s1 = s;
    reverse(all(s1));

    // cout << s << " : " << s1 << endl;

    char maxVal = *max_element(all(s));

    fr(i,0,n)
    {
    	if(s[i] != s1[i])
    	{
    		diff = i;
    		break;
    	}
    }

    if (k == 0)
    { 
    	if (diff > -1 && s1[diff] > s[diff])
    	{
    		yes;
    	}
    	else no;
	}
    else
    {
    	if (diff==-1 && s[n-1] != maxVal) yes;
    	else if (diff > -1 && s1[diff] > s[diff]) yes;
       	else if (diff > -1 && s1[diff] != maxVal) yes;
    	else no;
    	
    }

    
	

   	
	// cout << ("abc" < "cba") << endl;

    

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}