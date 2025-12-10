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
    int n, k; cin >> n >> k;
    in(vA,n);
    in(vB,n);

    int sum = 0, maxSum = INT_MIN;


    auto maxElem = max_element(all(vB));
    int maxValPos = maxElem - vB.begin();
    int maxVal = *maxElem;

    if (k % 2)
    {
    	vA[maxValPos] += maxVal;
    }

    fr(i,0,n)
    {
    	sum += vA[i];

    	if (sum > maxSum)
    	{
    		maxSum = sum;
    	}

    	if (sum < 0) sum = 0;
    }



    // fr(i,0,n)
    // {
    // 	if (vB[i] == maxVal)
    // 	{

    // 	}
    // }

    // if (k % 2) maxSum += maxVal;


    cout << maxSum << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}