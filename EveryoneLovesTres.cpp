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
    int n;
		cin >> n;
		if(n == 1 || n == 3)
		{
			cout << "-1\n";
		}
		else if(n%2 == 0)
		{
			for(int i = 0; i<n-2; i++)
			{
				cout << "3";
			}
			cout << "66\n";
		}
		else
		{
			for(int i = 0; i<n-5; i++)
			{
				cout << "3";
			}
			cout << "36366\n";
		}


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}