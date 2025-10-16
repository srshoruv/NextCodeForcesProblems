#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


int main() {
	// your code goes here
	int x,y;
	cin >> x >> y;
	
	x += 1;

	x *= 4;
	y *= 3;
	
	float sum = x + y;
	
	float div = sum / 8;
	int n = sum / 8;

	if (div > int (div))
	{
		cout << n + 1 << endl;
		return 0;
	}

	cout << n << endl;
	



    return 0;
}