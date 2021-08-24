#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N, K;
    vector<string> essay;
    cin >> N >> K;
    int total = 0;

    for(int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        essay.push_back(temp);

    }
    for(int i = 0; i < essay.size(); i++)
    {
        string a = essay[i];

        if(total + a.length() <= K)
        {   

            if(total == 0)
            {
                cout << a;
            }
            else
            {
                cout << " " << a;
            }
            total = total + a.length();
            if(total == K)
            {
                cout << endl;
                total = 0;
            }
        }
        else
        {
            cout << endl;
            cout << a;
            total = a.length();
        }
    }

}