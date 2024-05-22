#include <bits/stdc++.h>
using namespace std;

int num_of_pieces(string s)
{
    int bin = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if (s[i-1] == '1' && s[i] == '0')
        bin++;
    }
    return bin;
    
}

int main()
{
    int t;
    string str;
    cin>>t;
    vector<int> v;
    for(int i = 0; i < t; i++)
    {
        cin>>str;
        int cuts = num_of_pieces(str);
        v.push_back(cuts);
    }
    for(int i = 0; i < t; i++)
    {
        cout<<v[i]<<endl;
    }

}