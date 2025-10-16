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
    int n, count = 0, countRev = 0;
    cin >> n;

    string s,s1;
    cin >> s;

    s1 = s;

    sort(all(s1));
    // cout << s1 << endl;
    

    fr(i,0,n)
    {
    	if(s[i] != s1[i]) count++;
    }

    sort(all(s1), greater<int> ());

    fr(i,0,n)
    {
    	if(s[i] != s1[i]) countRev++;
    }

    cout << min(count,countRev) / 2 << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}