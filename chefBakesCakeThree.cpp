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

    	vector<int> v(n);

    	for (int i = 0; i < n; i++)
    	{
    		cin >> v[i];
    	}

    	sort(v.begin(), v.end());

    	int m = v[n/2];
    	int sum = 0;

    	for (int i = 0; i < n; i++)
    	{
    		if (v[i]>m)
    		{
    			v[i] = m;
    		}

    		sum += v[i];

    	}

    	sum *= 50;

    	int ans = sum - (m * n * 30);

    	cout << ans << endl;

    }

    return 0;
}