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
    int n, x;
    cin >> n >> x;

    in(v,n);
    sort(all(v));

    int sum = 1;

    int k = 0;


    fr(i,0,n)
    {

    	if (sum > x)
    	{
    		break;
    	}

    	sum *= v[i];
    	k++;
    }

    if (sum > x && k != n)
    {
    	k--;
    }

    if (k <= 0)
    {
    	cout << 1 << endl;
    }
    else
    {
    	cout << k * k << endl;
    }

    
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}