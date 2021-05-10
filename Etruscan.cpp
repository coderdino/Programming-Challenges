#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int cas;
    unsigned long long int num, ans;

    cin >> cas;

    while(cas--)
    {
        cin >> num;

        ans = (-1 + sqrt(1+8*num))/2;

        cout << ans;
    }
    return 0;

}
