#include <iostream>
using namespace std;
#define square(r) r*r
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The square of the number is :" << square(num);
    return 0;
}