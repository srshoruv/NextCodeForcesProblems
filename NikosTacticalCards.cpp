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
    int n; cin >> n;
    in(vA,n);
    in(vB,n);

    int score = 0;

    fr(i,0,n-1)
    {

    	if (abs(score - vA[i]) > abs(vB[i]-score))
    	{
    		score -= vA[i];
    	}
    	else
    	{
    		score = vB[i] - score;
    	}

    	cout << score << " ";
    	
    }

    cout << endl;

    // int temp1 = score - vA[n-1];
    // int temp2 = vB[n-1] - score;

    // cout << score << endl;


    // cout << max(temp1,temp2) << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}