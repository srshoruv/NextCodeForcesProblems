#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    ll testCase;
    cin >> testCase;
    vector<pair<ll,ll>> v;

    while (testCase--) 
    {
    	ll n, c , x, k;
    	cin >> n;

    	if (n == 1) 
    	{
			cin >> c >> x;

			v.push_back(make_pair(c,x));
		}

		else
		{
			cin >> k;
			ll total = 0;
			int i = 0;

			while (k)
			{
				if (v[i].first <= k)
				{
					total += v[i].first * v[i].second;
					k -= v[i].first;
					v.erase(v.begin());
				}
				else
				{
					v[i].first -= k;
					total += v[i].second * k;
					k = 0;
				}


			}

			cout << total << endl;
		}


        


    }

    return 0;
}