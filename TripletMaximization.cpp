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
    int x, y;
    cin >> x >> y;

    vi v;

    int n = x + y;

    int score = 0;

    fr(i,0,x) v.push_back(1);
    fr(i,0,y) v.push_back(2);

    int temp = n / 3;

    for(int i = 1; i <= temp; i++)
    {
   
		score += v[n-i];
    	
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