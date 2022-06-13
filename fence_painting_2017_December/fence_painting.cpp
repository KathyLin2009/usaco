#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b >= c && c >= a || b >= d && d >= a || d >= b && b >= c || d >= a && a >= c)
    {
        int e, f, minimum, maximum;
        e = min(a, b);
        f = min(c, d);
        minimum = min(e, f);
        e = max(a, b);
        f = max(c, d);
        maximum = max(e, f);
        cout << maximum - minimum;
        return 0;
    }
    else
    {
        cout << b - a + d - c;
        return 0;
    }
    
}