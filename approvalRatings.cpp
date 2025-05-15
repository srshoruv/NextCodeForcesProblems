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
    	int sum = 0;

	
		vector<int> vec(5);

		for (int i = 0; i < 5; i++)
		{
			cin >> vec[i];
			sum += vec[i];
		}

		if ( sum / 5 >= 7)
		{
			cout << 0 << endl;
		}
		else
		{
			int cash = 0;
			while (sum / 5 < 7)
			{
				int man = vec[0];
				int manIdx = 0;

				for (int i = 0; i < 5; i++)
				{
					if (man > vec[i])
					{
						man = vec[i];
						manIdx = i;
					}    		
				}

				vec[manIdx] = 10;
				sum += 10 - man;
				cash += 100;

			}

			cout << cash << endl;
		}

		
	}


    
    return 0;
}