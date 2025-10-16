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
    int a,b,c;
    cin >> a >> b >> c;

    int maxVal = max(a,max(b,c));
    int minVal = min(a,min(b,c));
    int mid = (a+b+c) - minVal - maxVal;

    // cout << "min: " << minVal << " mid: " << mid << " max: " << maxVal << endl;


    if (minVal == mid && maxVal % 2 == 0) cout << "YES\n";
    else if (maxVal == (minVal + mid)) cout << "YES\n";
    else if (a == b && c % 2 == 0) cout << "YES\n";
    else if (b == c && a % 2 == 0) cout << "YES\n";
    else if (a == c && b % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}