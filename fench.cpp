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

    in(v,n);

    int minSum;
    int idx;

    fr(i,0,k)
    {
        minSum += v[i];
    }

    idx = 1;
    int currSum = minSum;
    fr(i,k,n)
    {
        currSum += v[i] - v[i-k];
        if (currSum < minSum)
        {
            minSum = currSum;
            idx = i-k+2;
        }
    }

    cout << idx << endl;

    
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}