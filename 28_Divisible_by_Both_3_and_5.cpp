#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
        cout << "This number is divisible by both 3 and 5.";
    else
        cout << "This number is not divisible by both 3 and 5.";

    return 0;
}