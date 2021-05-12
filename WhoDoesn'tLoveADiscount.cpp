#include <iostream>
using namespace std;

int main ()
{
    double discount = 0.15;
    int totalPrice;
    int upto = 0;
    
    do
    {
        cin >> totalPrice;
        double total = totalPrice*discount;
        cout << total << endl;
        upto++;
    }
    while (upto < 3);
    
    
    return 0;
}
