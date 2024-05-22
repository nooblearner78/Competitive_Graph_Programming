#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, q;
    vector<int> a,b,c;
    int as, bs, qs;
    cin>>t;
	while(t--){
		cin>>n>>k>>q;
		for(int i = 0; i < k; i++)
        {
            cin>>as;
            a.push_back(as);
        }

		for(int i = 0; i < k; i++)
        {
            cin>>bs;
            b.push_back(bs);
        }
		while(q--){
			cin>>qs;
			auto it = lower_bound(a.begin(), a.end(), qs);
            int th = it - a.begin();
			int op = b[th] + (qs-a[th])*(b[th+1]-b[th])/(a[th+1]-a[th]);
			c.push_back(op);

		}
        for(int i : c)
        {
            
            cout<<i<<" ";
        }
	}
}
