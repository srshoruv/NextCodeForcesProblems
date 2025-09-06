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
    int x,y;
    cin >> x >> y;

    int xSum = 0;
    int ySum = 0;

    int finX = 0;
    int finY = 0;

    while(x)
    {
    	xSum += x%10;

    	x /= 10;
    }

    while(y)
    {
    	ySum += y%10;

    	y /= 10;
    }

    ++xSum;

    while(xSum)
    {
    	finX += xSum%10;

    	xSum /= 10;
    }

    while(ySum)
    {
    	finY += ySum%10;

    	ySum /= 10;
    }

    cout << finX << " " << finY << endl;
    // if (xSum+1 == ySum) cout << "Yes\n";
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}