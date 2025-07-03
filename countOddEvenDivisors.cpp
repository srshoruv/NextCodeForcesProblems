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

        // Your code here
        int x, odd = 0, even = 0;
        cin >> x;

        for (int i = 1; i <= x; i++)
        {
        	if ( x % i == 0)
        	{
        		if (i % 2 == 0) even++;
        		else odd++;
        	}
        }

        cout << odd << " " << even << endl;


    }

    return 0;
}