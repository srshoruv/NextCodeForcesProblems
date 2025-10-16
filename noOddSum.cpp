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

        int n, count = 0, ones = 0, sec = 0;
        cin >> n;

        // vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
        	int x;
        	cin >> x;
        	if (x==1)ones++;
        	else sec++;
        }

        if (ones > sec)
        {
        	cout << sec << endl;
        }
        else if (ones == sec)
        {
        	cout << ones / sec << endl;
        }
        else
        {
        	cout << 0 << endl;
        }

        

    }

    return 0;
}