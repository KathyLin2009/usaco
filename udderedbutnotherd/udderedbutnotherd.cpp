#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet, letters_heard;
    int result = 0;
    bool yesorno;
    cin >> alphabet >> letters_heard;
    int letters_heard_len = letters_heard.length();
    while(letters_heard_len != 0)
    {
        for(int i = 0; i < 26; i++)
        {
            if(alphabet[i] == letters_heard[letters_heard.length() - letters_heard_len])
            {
                letters_heard_len--;
                yesorno = true;
            }
        }
        if(yesorno == true)
        {
            result++;
            yesorno = false;
        }
    }
    cout << result;
}