#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int testCase;
    cin >> testCase;

    while (testCase--) 
    {

        int x, res = 0;
        cin >> x;

        while ( x > 3 || x % 2 == 0)
        {
        	if ( x % 2 == 0)
        	{
        		x = x / 2;
        	}
        	else if ( x > 3)
        	{
        		x -= 3;
        	}
        }

        cout << x << endl;

    }

    return 0;
}