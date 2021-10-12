#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int temp;
    vector<int> nums, answer;
    for(int i = 0; i < 7; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            for(int k = j + 1; k <= 6; k++)
            {
                int A = nums[i];
                int B = nums[j];
                int C = nums[k];
                for(int a = 0; a < 7; a++)
                {
                    if(A + B + C == nums[a])
                    {
                        answer.push_back(A);
                        answer.push_back(B);
                        answer.push_back(C);
                        sort(answer.begin(), answer.begin() + 3);
                        cout << answer[0] << " " << answer[1] << " " << answer[2];
                        return 0;
                    }
                }
            }
        }
    }
}