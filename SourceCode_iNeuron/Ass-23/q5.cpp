#include <iostream>
using namespace std;
int main()
{
    float volume, l, b, h;
    cout << "Enter length , breadth ,Height ";
    cin >> l >> b >> h;
    volume = l * b * h;
    cout << "Volume of the cuboid is :" << volume;
    return 0;
}