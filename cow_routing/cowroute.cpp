#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    freopen("cowroute.in", "r", stdin);
    freopen("cowroute.out", "w", stdout);
    int N, A, B;
    vector<pair<vector<int>, vector<int> > > info;
    cin >> A >> B >> N;

    for(int i = 0; i < N; i++)
    {
        int cost, num;
        vector<int> cities, stuff;
        cin >> cost >> num;
        stuff.push_back(cost);
        stuff.push_back(num);
        for(int j = 0; j < num; j++)
        {
            int temp;
            cin >> temp;
            cities.push_back(temp);
        }
        info.push_back(make_pair(stuff, cities));
    }
    int min_cost = numeric_limits<int>::max();
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < info[i].first[1]; j++)
        {
            if(info[i].second[j] == A)
            {
                for(int k = j + 1; k < info[i].first[1]; k++)
                {
                    if(info[i].second[k] == B)
                    {
                        if(info[i].first[0] < min_cost)
                        {
                            min_cost = info[i].first[0];
                        }
                    }
                }
            }
        }
    }
    if(min_cost == numeric_limits<int>::max())
    {
        cout << -1;
    }
    else
    {
        cout << min_cost;
    }



}