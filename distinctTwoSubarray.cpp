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

        set<int> s;

        for (int i=0; i < n; i++)
        {
        	int x;
        	cin >> x;
        	s.insert(x);
        }

        if (s.size() >= 2)
        {
        	cout << 2 << endl;
        }
        else
        {
        	cout << -1 << endl;
        }

    }

    return 0;
}