#include <iostream>
using namespace std;
int main()
{
    int val;
    cout << "Enter the number " << endl;
    cin >> val;

    for (int i = 1; i <= 10; i++)
    {
        cout << val << " X " << i << " = " << val * i << endl;
    }
    return 0;
}
