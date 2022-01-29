#include <iostream>
#include <vector>
using namespace std;

/*nt main()
{
    vector<int> temp_wanted, temp_current;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp_wanted.push_back(temp);
    }
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp_current.push_back(temp);
    }
    int i = 0;
    while(temp_wanted[i] != temp_current[i])
    {
        
    }
    
}*/

int main()
{
    vector<int> temp_wanted, temp_current, temp_dif;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp_wanted.push_back(temp);
    }
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp_current.push_back(temp);
    }
    for(int i = 0; i < N; i++)
    {
        int dif;
        dif = temp_wanted[i] - temp_current[i];
        temp_dif.push_back(dif);
    }
    int ans = 0;
    while(temp_dif.size() != 0)
    {
        if(temp_dif[temp_dif.size()-1] == 0)
        {
            temp_dif.pop_back();
            continue;
        }
        bool positive;
        if(temp_dif[temp_dif.size()-1] > 0)
        {
            positive = true;
        }
        else
        {
            positive = false;
        }
        int amt = 1;
        while(temp_dif.size() > amt)
        {
            if(temp_dif[temp_dif.size()-1-amt] == 0)
            {
                break;
            }
            else if((temp_dif[temp_dif.size()-1-amt] > 0) != positive)
            {
                break;
            }
            else
            {
                amt++;
            }
        }
        ans++;
        for(int i = 0; i < amt; i++)
        {
            if(positive == true)
            {
                temp_dif[temp_dif.size() -1-i]--;
            }
            else
            {
                temp_dif[temp_dif.size() -1-i]++;
            }
        }
    }
    cout << ans;
}