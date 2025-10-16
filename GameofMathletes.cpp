#include "bits/stdc++.h"
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
    int n, k;
    cin >> n >> k;

    in(v,n);
    sort(all(v));

    int i = 0, j = n - 1, score = 0;

    while(i < j)
    {
        int sum = v[i] + v[j];
        if(sum == k)
        {
            score++;
            i++;
            j--;
        }
        else if(sum < k) i++;
        else j--;
    }

    cout << score << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}