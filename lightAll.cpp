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
        string s;
        cin >> n >> s;
        bool r = true;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
        	v[i] = s[i] - '0';
        }

        for (int i = 0; i < n; i++)
        {
        	if (s[i] == '1')
        	{
        		if (v[i-1]== 0 && i > 0)
        		{
        			v[i-1] = 1;
        		}
        		else if (v[i+1]== 0 && i < n - 1)
        		{
        			v[i+1]= 1;
        		}
        	} 
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
        	if (v[i]==0)
        	{
        		r = false;
        		break;
        	}
        }
        

        if (r)
        {
        	cout << "Yes\n";
        }
        else
        {
        	cout << "No\n";
        }
    }

    return 0;
}