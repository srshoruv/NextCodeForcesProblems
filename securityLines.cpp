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

        for (int i = 0; i < n; i++)
        {

        	cin >> v[i];
        	
        }

        int minVal = v[0];
        int minIdx = 0;

        for (int i = 1; i < n; i++)
        {
        	if (minVal > v[i])
        	{
        		minVal = v[i];
        		minIdx = i;
        	}
        }

        for (int i = 0; i < n; i++)
        {
        	v[i] -= minIdx;
        }

        minVal = v[0];
        minIdx = 0;

        for (int i = 1; i < n; i++)
        {
        	if (minVal > v[i])
        	{
        		minVal = v[i];
        		minIdx = i;
        	}
        }

        if (v[minIdx] <= 0)
        {
        	cout << minIdx << endl;
        }
        else
        {
        	cout << minIdx+v[minIdx] << endl;
        }


    }

    return 0;
}