#include <iostream>
#include <string>
using namespace std;

/*int main()
{
    long long N;
    string cows;
    cin >> N >> cows;
    long long photo_length = 3;
    long long result = 0;
    while(photo_length <= N)
    {
        for(long long i = 0; i < N - photo_length + 1; i++)
        {
            long long nog = 0;
            long long noh = 0;
            for(long long j = 0; j < photo_length; j++)
            {
                if(i + photo_length <= N)
                {
                    if(cows[j + i] == 'G')
                    {
                        nog++;
                    }
                    else
                    {
                        noh++;
                    }
                }
                if(nog > 1 && noh > 1)
                {
                    break;

                }
            }
            if(nog == 1 || noh == 1)
            {
                result++;
            }
        }
        photo_length++;
    } 
    cout << result;
}*/

int main()
{
    long long N;
    string cows;
    cin >> N >> cows;
    long long photo_length = 3;
    long long result = 0;
    while(photo_length <= N)
    {
        long long nog = 0;
        long long noh = 0;
        for(int i = 0; i < photo_length; i++)
        {
            if(cows[i] == 'G')
            {
                nog++;
            }
            else
            {
                noh++;
            }
        }
        if(noh == 1 || nog == 1)
        {
            result++;
        }
        for(long long i = 0; i < N - photo_length; i++)
        {
            if(cows[i] == 'G')
            {
                nog--;
            }
            else
            {
                noh--;
            }
            if(cows[i + photo_length] == 'G')
            {
                nog++;
            }
            else
            {
                noh++;
            }
            if(nog == 1 || noh == 1)
            {
                result++;
            }
        }
        photo_length++;
    } 
    cout << result;
}