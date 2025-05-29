#include <bits/stdc++.h>
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

    	
    	bool found = false;

    	vector<int> vec(n);
    	for (int i = 0; i < n; i++)
    	{
    		cin >> vec[i];
    	}

    	for (int i = 0; i < n; i++)
    	{
    		int sum = vec[i];
    		if ( sum % 3 == 0)
    		{
    			found = true;
    			break;
    		}

    		for (int j = i + 1; j < n; j++)
    		{
    			sum += vec[j];
    			if ( sum % 3 == 0)
	    		{
	    			found = true;
	    			break;
	    		}
	    		else
	    		{
	    			found = false;
	    		}
	    		
    		}
    		if (found)
    		{
    			break;
    		}
    	}

    	// for (int i = 0; i < n; i++)
    	// {
    	// 	sum += vec[i];
    	// 	if ( sum % 3 == 0)
    	// 	{
    	// 		found = true;
    	// 		break;
    	// 	}
    	// 	else
    	// 	{
    	// 		found = false;
    	// 	}

    	// }

    	if (found)
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