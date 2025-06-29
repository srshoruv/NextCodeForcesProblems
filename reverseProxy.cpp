#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n, q;
    cin >> n >> q;

    vector<int> v(q);
    vector<int> ans(n+1,0);


    for (int i = 0; i<q; i++)
    {
    	cin >> v[i];

    	if (v[i] >= 1)
    	{
    		cout << v[i] << " ";
    		ans[v[i]]++;
    	}
    	else
    	{
    		int minI = 0;
    		for (int j = 0; j <= n; j++)
    		{
    			if (ans[minI] > ans[j])
    			{
    				minI = j;
    			}
    		}
    		ans[minI]++;
    		cout << minI+1 << " ";
    	}
    }


    return 0;
}