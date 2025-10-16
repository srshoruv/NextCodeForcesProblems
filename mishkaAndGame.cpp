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
    int n;
    cin >> n;

    int m = 0, c = 0;

    while(n--)
    {
    	int x,y;
    	cin >> x >> y;

    	if (x > y) m++;
    	else if ( x < y) c++; 
    }

    if (m > c) cout << "Mishka\n";
    else if (m < c) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}