#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    vector<double>znach(4);
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    znach[0] = a + b;
    znach[1] = a - b;
    znach[2] = a * b;
    znach[3] = a / b;
    double max = znach[0];
    for(size_t i = 0;i < 4; i++)
    {
        if(max < znach[i + 1])
        {
            max = znach[i + 1];
        }
    }
    cout << "Max = " << max << '\n';
    return 0;
}
