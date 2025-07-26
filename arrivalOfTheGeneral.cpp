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
    int n;
    cin >> n;

    in(v,n);
    int maxPos = 0, minPos = 0;

    int minVal = *min_element(all(v));
    int maxVal = *max_element(all(v));

    

    fr(i,0,n)
    {
    	if(v[i]==minVal)
    	{
    		minPos = i;
    	}

    	if(v[i]==maxVal)
    	{
    		maxPos = i;
    	}

    }


    if ((maxPos > abs(minPos - n + 1)) && ((minPos - n + 1) != 0))
    {
    	minPos++;
    }

    cout << maxPos + abs(n - 1 - minPos) << endl;


    
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}