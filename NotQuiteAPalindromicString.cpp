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
    int n,k, ones = 0, zeros = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    fr(i,0,n)
    {
    	if(s[i]=='1') ones++;
    	else zeros++;
    }

    int maxgood=(zeros/2)+(ones/2);
       int mingood=(abs(zeros-ones))/2;
       if(k>=mingood&&k<=maxgood&&k%2==mingood%2) yes;
       else no;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}