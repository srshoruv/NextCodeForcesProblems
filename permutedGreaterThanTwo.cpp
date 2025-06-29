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

        int x, y, z;
        cin >> x >> y >> z;

        int sum = y + (z*2);

        if (sum < 2)
        {
        	cout << "No\n";
        }

    }

    return 0;
}