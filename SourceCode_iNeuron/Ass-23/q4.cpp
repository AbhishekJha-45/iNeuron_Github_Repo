#include <iostream>
using namespace std;
#define pi 3.14
#define area(r) r*r
void areaCircle(int r){
    cout << "Area of the circle is  : " << pi * area(r);
}
int main()
{
    float radius;
    cout << "Enter Radius of the circle : ";
    cin >> radius;
    areaCircle(radius);
    return 0;
}