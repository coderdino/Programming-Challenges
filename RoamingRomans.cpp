#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n;
    cin >> n;

    double total = n * 1000 * 5280 / 4854;

    cout << round(total) << endl;

    return 0;
}
