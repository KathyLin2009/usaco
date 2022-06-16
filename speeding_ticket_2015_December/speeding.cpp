#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int N, M;
    cin >> N >> M;
    vector<int> road, speed_limit, bessy_length, bessy_speed;
    int r = 0;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        road.push_back(temp + r);
        r = road[i];
        cin >> temp;
        speed_limit.push_back(temp);
    }
    int bl = 0;
    for(int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        bessy_length.push_back(temp + bl);
        bl = bessy_length[i];
        cin >> temp;
        bessy_speed.push_back(temp);
    }
    vector<int> bessy_stuff;
    int max = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(road[i] <= bessy_length[j])
            {
                bessy_stuff.push_back(bessy_speed[j]);
                break;
            }
            if(road[i] == 100)
            {
                for(int k = bessy_stuff.size(); k < bessy_length.size(); k++)
                {
                    if(bessy_speed[k] > max)
                    {
                        max = bessy_speed[k];
                    }
                }
                bessy_stuff.push_back(max);
                break;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        if(bessy_stuff[i] > speed_limit[i] && bessy_stuff[i] - speed_limit[i] > result)
        {
            result = bessy_stuff[i] - speed_limit[i];
        }
    }
    cout << result;
}