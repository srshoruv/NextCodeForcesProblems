#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;

    while (n) 
    {

        int x = n;
        int ans = 0;

        for (int i = 2; i * i <= n; i++)
        {
        	if ( x % i == 0)
        	{
        		ans++;

        		while ( x % i == 0)
        		{
        			x /= i;
        		}
        	}

        	

        }
        if  (x > 1) ans++;
        cout << n << " : " << ans << endl;
        cin >> n;

    }

    return 0;
}