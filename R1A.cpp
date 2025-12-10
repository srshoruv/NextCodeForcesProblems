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

    vi odd, even;

    int oddSum = 0, evenSum = 0;

    fr(i,0,n)
    {
    	int x; cin >> x;

    	if(x%2)
    	{
    		odd.push_back(x);
    		oddSum += x;
    	}
    	else
    	{
    		even.push_back(x);
    		evenSum += x;
    	}
    }

    if (odd.size()==0)
    {
    	cout << *max_element(all(even)) << endl;
    }
    else if (even.size()==0)
    {
    	cout << *max_element(all(odd)) << endl;
    }

    else
    {

    	sort(all(even));
    	sort(all(odd));
    	cout << max(even[even.size()-1]+oddSum,odd[odd.size()-1]+evenSum) << endl;
    }



    
    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}