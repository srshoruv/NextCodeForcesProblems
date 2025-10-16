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
        vector<int> v2(n);
        int count = 0;

        for (int i = 0; i < n; i++)
        {
        	cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
        	cin >> v2[i];
        }

        for (int i = 0; i < n; i++)
        {
        	if (v[i] > v2[i])
        	{
        		count += v[i] - v2[i];
        	}
        }

        cout << count << endl;

    }

    return 0;
}