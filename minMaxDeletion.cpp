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

        int n,q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
        	cin >> v[i];
        }

        while (q--)
        {
        	int score = 0;
        	int p, x;
        	cin >> p >> x;
        	v[p+1] = x;
        	vector<int> v2 = v;

        	while (v2.size() >= 2)
        	{
        		score += min(v2[0], v2[1]);
        		int i;
        		if (v2[0] > v2[1])
        		{
        			i = 0;
        		}
        		else
        		{
        			i = 1;
        		}
        		v2.erase(v2.begin()+i);
        	}
        	cout << score << endl;
        }

    }

    return 0;
}