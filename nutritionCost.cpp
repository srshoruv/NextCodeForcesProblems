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

        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        vector<int> b(n);


        for (int i = 0; i < n; i++)
        {
        	cin >> a[i];
        }

// sorting in A basis

        for (int i = 0; i < n; i++)
        {
        	cin >> b[i];
        }

        for (int i = 0 ; i < n; i++)
        {
        	for (int j = 0; j < n; j++)
        	{
        		if (a[i] < a[j])
        		{
        			swap(b[i],b[j]);
        			swap(a[i],a[j]);
        		}
        	}
        }

        
// removing elements

        for (int i = 0; i < a.size()-1; i++)
        {
        	if (a[i] == a[i+1])
        	{
        		if (b[i] < b[i+1])
        		{
        			a.erase(a.begin()+i+1);
        			b.erase(b.begin()+i+1);
        		}
        		else
        		{
        			a.erase(a.begin()+i);
        			b.erase(b.begin()+i);
        		}
        		
        	}
        }

        

        // sorting in the B basis

        for (int i = 0 ; i < a.size(); i++)
        {
        	for (int j = 0; j < a.size(); j++)
        	{
        		if (b[i] < b[j])
        		{
        			swap(b[i],b[j]);
        			swap(a[i],a[j]);
        		}
        	}
        }

        // for (int i = 0; i < a.size(); i++)
        // {
        // 	cout << a[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < b.size(); i++)
        // {
        // 	cout << b[i] << " ";
        // }

        int sumB = 0;

        for (int i = 0; i < b.size(); i++)
        {
        	sumB += b[i];
        }

        int res = c;
        // bool isMod = false;


        for (int i = 0; i < a.size(); i++)
        {
        	if (res < (c * (a.size() - i) - (sumB)))
        	{
        		res = (c * (a.size() - i) - (sumB));
        		// isMod = true;
        	}
        	sumB -= b[a.size()-i-1];
        }

        if (res > c)
        {
        	cout << res << endl;
        }
        else
        {
        	cout << 0 << endl;
        }

        

    }

    return 0;
}