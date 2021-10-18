#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<string, 5> screen;
    for (int i = 0; i < 5; i++)
        cout << screen[i] << endl;
    return 0;
}
