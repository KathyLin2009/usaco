#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    freopen("learning.in", "r", stdin);
    freopen("learning.out", "w", stdout);
    int N, A, B;
    vector<pair<int, string> > cows_stats;
    cin >> N >> A >> B;

    for(int i = 0; i < N; i++)
    {
        int temp;
        string a;
        cin >> a >> temp;
        cows_stats.push_back(make_pair(temp, a));
    }
    sort(cows_stats.begin(), cows_stats.end());
    int i = 0;
    int result = 0;
    int j = A;
    if(cows_stats[0].first > B)
    {
        if(cows_stats[0].second == "S")
        {
            cout << B - A + 1;
            return 0;
        }
        cout << 0;
        return 0;
    }
    if(cows_stats[N - 1].first < B)
    {
        if(cows_stats[N - 1].second == "S")
        {
            cout << B - A + 1;
            return 0;
        }
        cout << 0;
        return 0;
    }

    while(j < B - A + 1)
    {
        if(cows_stats[i].second == "S" && cows_stats[i+1].second == "S" && j >= cows_stats[i].first && j < cows_stats[i+1].first)
        {
            result = result + cows_stats[i+1].first - cows_stats[i].first;
            i++;
            j = j + cows_stats[i+1].first - cows_stats[i].first;
        }
        else if(cows_stats[i].second == "S" && cows_stats[i+1].second == "NS" && j >= cows_stats[i].first && j < cows_stats[i+1].first)
        {
            int mid = (cows_stats[i].first + cows_stats[i+1].first)/2;
            result = result + mid - cows_stats[i].first + 1;
            i++;
            j = j + mid - cows_stats[i].first + 1;
        }
        else if(cows_stats[i].second == "NS" && cows_stats[i+1].second == "S" && j >= cows_stats[i].first && j < cows_stats[i+1].first)
        {
            int mid = (cows_stats[i].first + cows_stats[i+1].first)/2;
            result = result - mid + cows_stats[i+1].first;
            i++;
            j = j - mid + cows_stats[i+1].first;
        }
        j++;
    }
    while(j < B)
    {
        if(cows_stats[i].second == "S" && cows_stats[i+1].second == "S")
        {
            result++;
            
        }
        else if(cows_stats[i].second == "S" && cows_stats[i+1].second == "NS")
        {
            int mid = (cows_stats[i].first + cows_stats[i+1].first)/2;
            if(j <= mid)
            {
                result++;
                
            }
        }
        else if(cows_stats[i].second == "NS" && cows_stats[i+1].second == "S")
        {
            int mid = (cows_stats[i].first + cows_stats[i+1].first)/2;
            if(j >= mid)
            {
                result++;
                
            }
        }
    }
    cout << result << endl;

}*/
/*
int main()
{
    typedef long long ll;
    freopen("learning.in", "r", stdin);
    freopen("learning.out", "w", stdout);
    ll N, A, B;
    vector<pair<ll, string> > cows_stats;
    cin >> N >> A >> B;
    for(ll i = 0; i < N; i++)
    {
        ll temp;
        string a;
        cin >> a >> temp;
        cows_stats.push_back(make_pair(temp, a));
    }
    cows_stats.push_back(make_pair(INT_MIN, "NS"));
    cows_stats.push_back(make_pair(INT_MAX, "NS"));
    sort(cows_stats.begin(), cows_stats.end());
    ll result = 0;
    for(ll i = 0; i < cows_stats.size(); i++)
    {
        ll S = cows_stats[i].first;
        ll E = cows_stats[i+1].first;
        ll M = (S+E)/2;
        if(cows_stats[i].second == "S")
        {
            int s = max(A, S+1);
            int e = min(B, M);
            if(e >= s)
            {
                result = result + e - s + 1;
            }
        }
        if(cows_stats[i+1].second == "S")
        {
            int s = max(A, M+1);
            int e = min(B, E);
            if(e >= s)
            {
                result = result + e - s + 1;
            }
        }
        if(cows_stats[i+1].second == "S" && cows_stats[i].second == "NS" && S%2 == E%2 && A <= M && M <= B)
        {
            result++;
        }
    }
    cout << result;
}*/