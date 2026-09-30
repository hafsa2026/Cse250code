#include <iostream>
using namespace std;

int main()
{
    float l, w, p;

    cout << "L and W: ";
    cin >> l >> w;

    p = 2 * (l + w);

    cout << "Perimeter of rectangle = " << p;

    return 0;
}