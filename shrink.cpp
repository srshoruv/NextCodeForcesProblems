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

        v[0] = 2;

        for (int i = 1; i < n-1; i++)
        {
        	v[i] = n - i + 1;
        }
        v[n-1] = 1;

        for (int i = 0; i < n; i++)
        {
        	cout << v[i] << " ";
        }
        cout << endl;



    }

    return 0;
}