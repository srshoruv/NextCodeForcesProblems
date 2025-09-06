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
    int n, k;
    cin >> n >> k;

    int mid = (n / 2) + (n % 2);



    if (k > mid)
    {
        cout << (k-mid) * 2 << endl;
    }
    else
    {
        cout << (k-1) * 2 + 1 << endl;
    }

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}