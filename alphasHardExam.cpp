#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll binEx(ll base, ll n, ll m)
{
	ll res = 1;
	base %= m;

	while ( n > 0)
	{
		if (n % 2 == 1)
		{
			res = (res * base) % m;
		}

		base = (base * base) % m;
		n /= 2;
	}

	return res;
}

int main() {
    fastio;

    ll n;
    cin >> n;

    cout << binEx(1378, n, 10) << endl;

    
    return 0;
}