#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
   int n;
   int h;
   int v;
   int total;
   
   cin >> n >> h >> v;
   total = max(h, n-h)*max(v, n-v)*4;
   cout << total << endl;

    return 0;
}