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

        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        int sum = 0;

        for (int i=0; i<n; i++)
        {
        	cin >> v[i];
        	sum += v[i];
        }


        int first, last;

        for (int i = 0; i < n; i++)
        {
        	if (v[i]==1)
        	{
        		first = i;
        		break;
        	}
        }

        for (int i = n-1; i >= 0; i--)
        {
        	if (v[i]==1)
        	{
        		last = i;
        		break;
        	}
        }

        int diff = abs (last-first) + 1;

        if (sum > k)
        {
        	cout << "NO\n";
        }

        else if (diff <= k)
        {
        	cout << "YES\n";
        }
        else
        {
        	cout << "NO\n";
        }

    }

    return 0;
}