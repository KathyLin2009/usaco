#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("cowjog.in", "r", stdin);
    freopen("cowjog.out", "w", stdout);
    vector<int> speed;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        cin >> temp;
        speed.push_back(temp);
    }
    reverse(speed.begin(), speed.end());
    
    int result = 1;
    int first_cow = 0;
    for(int i = 0; i < N-1; i++)
    {
        if(speed[first_cow] >= speed[first_cow + 1])
        {
            result++;
            first_cow++;
        }
        else
        {
            speed.erase(speed.begin() + first_cow + 1);
        }
    }
    cout << result;
}