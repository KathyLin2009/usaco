#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
using namespace std;

int FindDiff(vector< pair <int, int> > checkpoints, int i)
{
    int distance1 = abs(checkpoints[i-1].first - checkpoints[i].first) + abs(checkpoints[i-1].second - checkpoints[i].second);
    int distance2 = abs(checkpoints[i].first - checkpoints[i+1].first) + abs(checkpoints[i].second - checkpoints[i+1].second);
    int distance = distance1 + distance2;
    int skipped_distance = abs(checkpoints[i-1].first - checkpoints[i+1].first) + abs(checkpoints[i-1].second - checkpoints[i+1].second);
    int diff = distance - skipped_distance;
    return diff;
}

int main()
{
    freopen("marathon.in", "r", stdin);
    freopen("marathon.out", "w", stdout);

    int N;
    cin >> N;
    vector< pair < int, int> > checkpoints;
    for(int i = 0; i < N; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        checkpoints.push_back(make_pair(x, y));
    }
    int max = 0;
    int skipped_checkpoint;
    for(int i = 1; i <= N-2; i++)
    {
        int diff = FindDiff(checkpoints, i);
        if(diff >= max)
        {
            max = diff;
            skipped_checkpoint = i;
        }
    }
    int min_distance = 0;
    int i = 0;
    while(i < N-1)
    {
        if(i+1 == skipped_checkpoint)
        {
            int skipped_distance = abs(checkpoints[i].first - checkpoints[i+2].first) + abs(checkpoints[i].second - checkpoints[i+2].second);
            min_distance = min_distance + skipped_distance;
            i = i + 2;
        }
        else
        {
            int distance = abs(checkpoints[i].first - checkpoints[i+1].first) + abs(checkpoints[i].second - checkpoints[i+1].second);
            min_distance = min_distance + distance;
            i++;
        }

    }
    cout << min_distance << endl;
}