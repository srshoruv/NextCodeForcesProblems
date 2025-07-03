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

        int n, j , k, countB = 0, countS = 0;
        cin >> n >>j >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++) 
        {
    		cin >> v[i];
        }

        int p = v[j-1];

        for (int i = 0; i < n; i++)
        {
        	if (v[i] >= p && i != j-1) countB++;
        }

        countS = n - countB - 1;

        int total = 
        // cout << countB << endl;
        if (countB <= k)
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