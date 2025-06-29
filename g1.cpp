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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    int k, count = 0;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
    	if ( v[i] >= k)
    	{
    		count++;
    	}
    }

    cout << count << endl;

    

    return 0;
}