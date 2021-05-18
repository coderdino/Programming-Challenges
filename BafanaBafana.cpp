#include <iostream>

using namespace std;

int main()
{
  int testcases;
  cin >> testcases;
  
  for(int i = 1; i <= testcases; ++i)
  {
    int N, K , P;
    cin >> N >> K >> P;
    
    cout << "Case " << i << ":" << ((K + P) % N) + 1 << '\n';
  }
  
  return 0;
}
