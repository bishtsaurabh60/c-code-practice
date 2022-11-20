
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> ngi(vector<int> v)
{
    vector<int> news(v.size());
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        while (!s.empty() && v[s.top()] < v[i])
        {
            news[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        news[s.top()] = -1;
        s.pop();
    }
    return news;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vs;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            vs.push_back(val);
        }

        vector<int> v = ngi(vs);

        for (int i = 0; i < v.size(); i++)
        {
            cout<< vs[i] << "  " << (v[i] == -1 ? -1 : vs[v[i]]) << endl;
        }
    }
    return 0;
}