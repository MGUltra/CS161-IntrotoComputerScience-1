#include <iostream>

using namespace std;

int hailstone(int);

int main()
{
    int narmber;
    int county;

    cout << "Enter an integer" << endl;
    cin >> narmber;

    county = hailstone(narmber);

    cout << "loop count: ";
    cout << county << endl;

    return 0;
}
