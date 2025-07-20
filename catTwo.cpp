#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;

    vector<string> v(n);
    set<string> s;

    for (int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < n; j++)
    	{
    		if (i != j) s.insert(v[i]+v[j]);
    	}
    }

    cout << s.size();

    

    return 0;
}