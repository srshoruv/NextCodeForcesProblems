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

    	int n, s;
    	cin >> n >> s;
    	vector<int> v(n);

    	for (int i = 0; i < n; i++)
    	{
    		cin >> v[i];
    	}

    	int minVal = *min_element(v.begin(), v.end());
    	int maxVal = *max_element(v.begin(), v.end());

    }

    return 0;
}