#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    vector<int> x = {12,1,11,12,1,12};
    vector<int> y = {17,12,10,17,12,17};

    for (int i = 0; i < x.size(); i++)
            {
                for (int j = 0; j < x.size() - 1; j++)
                    {
                        if (y[j]<y[j+1])
                        {
                            swap(y[j], y[j+1]);
                            swap(x[j], x[j+1]);
                        }
                    }
            }

        for (int i = 0; i < x.size(); i++)
            {
                for (int j = 0; j < y.size(); j++)
                    {
                        if (x[i]==x[j] && i != j)
                        {
                            x.erase(x.begin()+j);
                            y.erase(y.begin()+j);
                        }
                    }
                
            }
        for (int i = 0; i < x.size(); i++)
        {
        	cout << x[i] << " ";
        }
    

    return 0;
}