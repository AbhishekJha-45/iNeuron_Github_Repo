#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After Swaping A is : " << a << " B is : " << b;
    return 0;
}