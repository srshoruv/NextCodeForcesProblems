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

        int x,y;
        cin >> x >> y;

        int maxVal = max(x,y);
        int minVal = min(x,y);

        if (__gcd(maxVal,minVal) > 1)
        {
        	cout << 0 << endl;
        }

        else if (__gcd(maxVal+1,minVal) > 1 || __gcd(maxVal,minVal+1) > 1 ) 
        {
        	cout << 1 << endl;
        }
        else
        {
        	
        	cout << 2 << endl;
        }


        
    }

    return 0;
}