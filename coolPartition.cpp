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
        map<int, int> m;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
        	int x;
        	cin >> x;
        	v[i] = x;

        	m[x]++;
        }

        int max = 1;

        for (auto x : m)
        {
        	if (x.second > max && x.first != v[n-1])
        	{
        		max = x.second;
        	}
        }

        cout << max << endl;


    }

    return 0;
}