#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    
    for (int i = 1; i <= m; ++i) 
    {
        cout << i << " x " << n << " = " << n * i << endl;
    }
    
    return 0;
}
