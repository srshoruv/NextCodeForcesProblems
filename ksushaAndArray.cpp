#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;
    bool found = true;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
    	found = true;

    	for (int j = n-1; j >= 0; j--)
    	{
    		if (v[j]%v[i] != 0)
    		{
    			found = false;
    			break;
    		}    		
    	}

    	if (found)
    	{
    		cout << v[i];
    		return 0;
    	}


    }

    cout << -1 << endl;

    
    
    return 0;
}