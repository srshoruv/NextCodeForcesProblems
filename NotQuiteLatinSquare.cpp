#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{

    int aCount = 0, bCount = 0, cCount = 0;

    fr(i,0,9)
    {
    	char x; cin >> x;

    	if (x=='A') aCount++;
    	else if (x=='B') bCount++;
    	else if (x=='C') cCount++;
    }

    int minVal = min(aCount,min(bCount,cCount));

    if(minVal==aCount) cout << 'A' << endl;
    else if (minVal==bCount) cout << 'B' << endl;
    else cout << 'C' << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}