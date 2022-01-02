#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("crosswords.in", "r", stdin);
    freopen("crosswords.out", "w", stdout);

    int N, M;
    cin >> N >> M;
    vector<vector<char> > crossword;
    for(int i = 0; i < N; i++)
    {
        vector<char> rows;
        for(int j = 0; j < M; j++)
        {
            char temp;
            cin >> temp;
            rows.push_back(temp);
        }
        crossword.push_back(rows);
    }

    vector< pair< int, int> > result;
    int num = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(crossword[i][j] == '.')
            {
                if((j - 1 < 0 || crossword[i][j-1] == '#') && j + 2 < M && crossword[i][j+1] == '.' && crossword[i][j+2] == '.')
                {
                    result.push_back(make_pair(i + 1, j + 1));
                    num++;
                }
                else if((i - 1 < 0 || crossword[i-1][j] == '#') && i + 2 < N && crossword[i+1][j] == '.' && crossword[i+2][j] == '.')
                {
                    result.push_back(make_pair(i + 1, j + 1));
                    num++;
                }
            }
        }
    }
    cout << num << endl;
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i].first << " " << result[i].second << endl;
    }
    
}