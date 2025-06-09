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

    sort(v.begin(), v.end(), greater<int>());



    for (int i = 0; i < n; i++)
    {
    	
    	if (v[i] <= (i+1))
    	{
    		cout << i + 1 << endl;
    		
    		return 0;
    	}
    }

    

    return 0;
}