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
    int k,r;
    cin >> k >> r;

    int shovel = 1;

    fr(i,1,11)
    {
        int temp = (k % 10) * i;
        if (temp % 10 == 0 || temp % 10 == r)
        {
            cout << i << endl;
            return;
        }
    }


}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}