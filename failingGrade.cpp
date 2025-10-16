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

        int n;
        cin >> n;
        int count = 0;

        bool has_schol = true;

        for (int i = 1; i <= n; i++)
        {
        	int x;
        	cin >> x;
        	count += x;

        	int avg = count / i;

        	if (avg < 40)
        	{
        		has_schol = false;
        	}
        }

        if (has_schol) cout << "Yes\n";
        else cout << "No\n";


    }

    return 0;
}