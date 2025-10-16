#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void seive (int x, vector<int> &res)
{
	vector<bool> isPrime(x+1, true);
	isPrime[0] = isPrime[1] = false;
	

	for (int i = 2; i*i <= x; i++)

	{
		if (isPrime[i])
		{

	
		for (int j = i * i; j <= x; j += i)
		{
			
			isPrime[j] = false;
			
		}
	}
	}

	for (int i = 2; i <= x; i++)
	{
		if (isPrime[i])
		{
			res.push_back(i);
		}
	}
}

int main() {
    fastio;

    int testCase;
    cin >> testCase;
    int x = 90000000;
    vector<int> res;
    seive(x,res);

    while (testCase--) 
    {

        // Your code here
        
        int n;
        cin >> n;
        

        cout << res[n-1] << endl;

    }

    return 0;
}